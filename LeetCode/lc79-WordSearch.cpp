/*************************************************************************
    > File Name: lc79.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 04 Jul 2018 12:32:07 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool SearchWord(const vector<vector<char>>& board, int x, int y,
                const string& word, int index, vector<vector<int>>& visited) {
  // cout << "Check (" << x << "," << y << ")" << '\t' << "Index " << index <<
  // '\t'
  //      << "Word Size: " << word.size() << endl;
  if (index == word.size()) return true;
  bool result = false;
  if (x >= 0 && x < board.size() && y >= 0 && y < board[0].size() &&
      board[x][y] == word[index] && visited[x][y] == 0) {
    visited[x][y] = 1;
    cout << "( " << board[x][y] << " )" << endl;
    ++index;

    result = SearchWord(board, x - 1, y, word, index, visited) ||
             SearchWord(board, x + 1, y, word, index, visited) ||
             SearchWord(board, x, y - 1, word, index, visited) ||
             SearchWord(board, x, y + 1, word, index, visited);

    if (!result) {
      --index;
      visited[x][y] = 0;
    }
  }

  return result;
}

bool exist(vector<vector<char>>& board, string word) {
  if (board.empty() || board[0].empty() || word.empty()) return false;
  int n = board.size(), m = board[0].size();
  vector<vector<int>> flag(m, vector<int>(n, 0));
  int match = 0;

  for (int i = 0; i != board.size(); ++i) {
    for (int j = 0; j != board[0].size(); ++j) {
      cout << "For   " << i << "," << j << endl;
      if (SearchWord(board, i, j, word, match, flag)) return true;
    }
  }

  return false;
}

int main() {
  vector<vector<char>> b{vector<char>{'A', 'B', 'C', 'E'},
                         vector<char>{'S', 'F', 'C', 'S'},
                         vector<char>{'A', 'D', 'E', 'E'}};
  string w{"ABCCED"};
  bool result = exist(b, w);
  cout << (result ? "True" : "False") << endl;
}
