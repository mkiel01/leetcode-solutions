class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

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

        int count;

        for(int k = 0; k<9;k++) {
            if (k < 3)
                count = 0;
            else if (k > 2 && k < 6)
                count = 3;
            else if (k >= 6)
                count = 6;

            blockCounts.clear(); // Clear the counts for each block before checking a new block
            for (int i = k; i < k + 3; ++i) {
                for (int j = 0; j < k + 3; ++j) {
                    int value = intBoard[i][j];
                    if (value != 0) {
                        if (blockCounts[value] >= 1) {
                            out = false; // Found a duplicate in this block
                            break; // No need to continue checking this block
                        }
                        blockCounts[value]++;
                    }
                }
            }


        }

//
//    for (auto pair : rowCounts){
//        cout << pair.first << " " << pair.second << endl;
//    }

        return out;
    }
};