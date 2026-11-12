class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check 3x3 grid
        for (int i = 0; i <= 6; i += 3) {
            for (int j = 0; j <= 6; j += 3) {
                unordered_map<char, char> map;
                for (int k = i; k < i + 3; ++k) {
                    for (int l = j; l < j + 3; ++l) {
                        if (board[k][l] == '.')
                            continue;
                        if (map.find(board[k][l]) != map.end()) {
                            return false;
                        } else {
                            map[board[k][l]] = board[k][l];
                        };
                    }
                }
            }
        }

        // Check rows valid
        for (int i = 0; i < 9; ++i) {
            unordered_map<char, char> um;
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.')
                    continue;

                if (um.find(board[i][j]) != um.end())
                    return false;
                else {
                    um[board[i][j]] = board[i][j];
                }
            }
        }

        // Check columns valid
        for (int i = 0; i < 9; ++i) {
            unordered_map<char, char> um;
            for (int j = 0; j < 9; ++j) {
                if (board[j][i] == '.')
                    continue;

                if (um.find(board[j][i]) != um.end())
                    return false;
                else {
                    um[board[j][i]] = board[j][i];
                }
            }
        }
        return true;
    }
};