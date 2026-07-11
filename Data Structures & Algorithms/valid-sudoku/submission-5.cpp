class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //row by row
        for(int i = 0; i < 9; ++i) {
            std::set<char> s;
            for(int j = 0; j < 9; ++j) {
                if(board[i][j] != '.') {
                    if(s.count(board[i][j]))
                        return false;
                    s.insert(board[i][j]);
                }
            }
            s.clear();
        }
        //column by column
        for(int j = 0; j < 9; ++j) {
            std::set<char> s;
            for(int i = 0; i < 9; ++i) {
                if(board[i][j] != '.') {
                    if(s.count(board[i][j]))
                        return false;
                    s.insert(board[i][j]);
                }
            }
            s.clear();
        }
        //subboxes check
        std::set<char> s;
        for(int i = 0; i < 9; i += 3) {
            for(int j = 0; j < 9; j += 3) {
                for(int k = 0; k < 3; ++k) {
                    for(int l = 0; l < 3; ++l) {
                        if(board[i + k][j + l] != '.') {
                            if(s.count(board[i + k][j + l]))
                                return false;
                            s.insert(board[i + k][j + l]);
                        }
                    }
                }
                s.clear();
            }
        }
        return true;
    }
};
