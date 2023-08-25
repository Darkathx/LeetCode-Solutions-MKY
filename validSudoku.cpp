#include <vector>
#include <unordered_set>


class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::unordered_set<char> checkSet1, checkSet2;
        int i, j, area;
        bool box[9][9] = {false};
        for(i = 0; i < 9; i++) {
            for(j = 0; j < 9; j++) {
                char x = board[i][j], y = board[j][i];
                if(x != '.') {
                    if(checkSet1.find(x) != checkSet1.end())
                        return false;
                    checkSet1.insert(x);
                    area = (i / 3) * 3 + (j / 3);
                    if(box[area][x - '1']) 
                        return false;
                    box[area][x - '1'] = true;
                }
                if(y != '.') {
                    if(checkSet2.find(y) != checkSet2.end())
                        return false;
                    checkSet2.insert(y);
                }
            }
            checkSet1.clear();
            checkSet2.clear();
        }
        return true;
    }
};