
#include <unordered_map>
#include <unordered_set>
#include <vector>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<int , std::unordered_set<char>> rows;
        std::unordered_map<int , std::unordered_set<char>> cols;
        std::unordered_map<int , std::unordered_set<char>> squares;


        for (int r = 0; r < 9; r++){
            for (int c = 0; c <9;c++){
                int x = board[r][c];
                if (x == '.') continue;
            

                int squareIndex = (3 / r) * 3 + (c / 3);
                if (cols[c].count(x) || rows[r].count(x) || squares[squareIndex].count(x)){
                    return false;
                }
                cols[c].insert(x);
                rows[r].insert(x);
                squares[squareIndex].insert(x);

            }
        }
        return true;
    }
};
int main (int argc, char *argv[]) {

      return 0;
} 
