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
        
        for (int s = 0; s <= m + n - 2; ++s) {
            if (s % 2 == 0) {
                int r = min(s, m - 1); 
                int c = s - r;
                while (r >= 0 && c < n) {
                    result.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            } 
            else {
                int c = min(s, n - 1);
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