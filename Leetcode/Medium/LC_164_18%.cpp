// Leetcode_164: Maximum Gap in log n TC
// Beats : 18%
// Link : https://leetcode.com/problems/maximum-gap/
// Example :Input: nums = [3,6,9,1]
// Output: 3
// Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.

Code : class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = i+1;
        int mxx = INT_MIN;
        if (n < 2) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        while (i < j && j < n) {
            int temp = nums[j] - nums[i];
            mxx = max(temp,mxx);
            i++;
            j++;
        }
        return mxx; 
    }
};