#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() < 3) return 0;

        int left = 0, right = height.size() - 1;
        int left_max = height[left], right_max = height[right];
        int trapped_water = 0;

        while (left < right) {
            if (left_max < right_max) {
                // Move left pointer
                left++;
                left_max = max(left_max, height[left]);
                trapped_water += max(0, left_max - height[left]);
            } else {
                // Move right pointer
                right--;
                right_max = max(right_max, height[right]);
                trapped_water += max(0, right_max - height[right]);
            }
        }

        return trapped_water;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped water: " << sol.trap(heights) << endl; // Output: 6
    return 0;
}
