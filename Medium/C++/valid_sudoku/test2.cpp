#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    vector<vector<char>> board = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','8','.','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
    };

    vector<vector<int>> intBoard(9, vector<int>(9, 0));

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] != '.') {
                intBoard[i][j] = board[i][j] - '0';
            }
        }
    }

    cout << intBoard[0][0];

    unordered_map<int, unordered_map<int, int>> myMap;
    // Populate the unordered_map
    for (int i = 0; i < intBoard.size(); i++) {
        for (int j = 0; j < intBoard[i].size(); j++) {
            for (int num : intBoard[i][j]){
                myMap[i][j][num]++;
            }
        }
    }



    return 0;
}
