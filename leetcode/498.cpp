#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        
        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;
        
        // There are m + n - 1 total diagonals
        for (int s = 0; s <= m + n - 2; ++s) {
            // For even sums, we go UP: row decreases, col increases
            if (s % 2 == 0) {
                int r = min(s, m - 1); // Start at the bottom-most possible row
                int c = s - r;
                while (r >= 0 && c < n) {
                    result.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            } 
            // For odd sums, we go DOWN: row increases, col decreases
            else {
                int c = min(s, n - 1); // Start at the right-most possible column
                int r = s - c;
                while (c >= 0 && r < m) {
                    result.push_back(mat[r][c]);
                    r++;
                    c--;
                }
            }
        }
        return result;
    }
};