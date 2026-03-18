#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = 0;
        int curr_max = 0, max_sum = nums[0];
        int curr_min = 0, min_sum = nums[0];

        for (int x : nums) {
            // Standard Kadane for Maximum Subarray
            curr_max = max(x, curr_max + x);
            max_sum = max(max_sum, curr_max);

            // Standard Kadane for Minimum Subarray
            curr_min = min(x, curr_min + x);
            min_sum = min(min_sum, curr_min);

            total_sum += x;
        }

        // If all numbers are negative, the circular sum (total_sum - min_sum) 
        // would result in 0 (empty set), which isn't allowed.
        if (max_sum < 0) {
            return max_sum;
        }

        return max(max_sum, total_sum - min_sum);
    }
};