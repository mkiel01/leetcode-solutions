

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
//    vector<vector<char>> board = {
//            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
////            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//            {'4', '.', '8', '.', '.', '3', '.', '.', '1'},
//            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
//    };

    vector<vector<char>> board = {
            {'.', '.', '.', '.', '5', '.', '.', '1', '.'},
            {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
            {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
            {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
            {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
            {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
            {'.', '.', '4', '.', '.', '.', '.', '.', '.'}
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
//            {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
    };



    vector<vector<int>> isEmpty;
    bool out = true; // Initialize out as true

    vector<vector<int>> intBoard(9, vector<int>(9, 0)); // Initialize intBoard as a 9x9 vector of zeros
    unordered_map<int, int> rowCounts; // Map to store counts for each row
    unordered_map<int, int> colCounts; // Map to store counts for each row
    unordered_map<int, int> blockCounts; // Map to store counts for each row

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] != '.') {
                int value = board[i][j] - '0';
                intBoard[i][j] = value;
            }
        }
    }

    int count;

    for(int k = 0; k<9;k++) {
        if (k < 3)
            count = 0;
        else if (k > 2 && k < 6)
            count = 3;
        else if (k >= 6)
            count = 6;
        cout << "row: " << k << " - " << k + 2 << " column: " << k << " - " << k + 2 << endl;
        blockCounts.clear(); // Clear the counts for each block before checking a new block
        for (int i = k; i < count + 3; ++i) {
            for (int j = 0; j < count + 3; ++j) {
                int value = intBoard[i][j];
                cout << "value: " << value << endl;
                if (value != 0) {
                    if (blockCounts[value] >= 1) {
                        out = false; // Found a duplicate in this block
                        break; // No need to continue checking this block
                    }
                    blockCounts[value]++;
                }
            }
        }
        count = 0;

    }



    for (int i = 0; i < 9; ++i) {
        rowCounts.clear(); // Clear the counts for each row before checking a new row
        for (int j = 0; j < 9; ++j) {
            int value = intBoard[i][j];
            if (value != 0)
            {
                if (rowCounts[value] >= 1) {
                    out = false; // Found a duplicate in this row
                    break; // No need to continue checking this row
                }
                rowCounts[value]++;
            }
        }
    }

    for (int i = 0; i < 9; ++i) {
        colCounts.clear(); // Clear the counts for each row before checking a new row
        for (int j = 0; j < 9; ++j) {
            int value = intBoard[j][i];
            if (value != 0)
            {
                if (colCounts[value] >= 1) {
                    out = false; // Found a duplicate in this row
                    break; // No need to continue checking this row
                }
                colCounts[value]++;
            }
        }
    }


    // Print whether the board is valid
    if (out) {
        cout << "The Sudoku board is valid." << endl;
    } else {
        cout << "The Sudoku board is not valid." << endl;
    }
//
//    for (auto pair : rowCounts){
//        cout << pair.first << " " << pair.second << endl;
//    }

    return out;
}
