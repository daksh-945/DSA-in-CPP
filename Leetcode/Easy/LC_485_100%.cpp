// Leetcode_485 : Max consecutive one's
// link : https://leetcode.com/problems/max-consecutive-ones/
// beats : 100%;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // vector<int> vec;
        int n = nums.size();
        int count = 0;
        int max_count = 0;
        // if (n == 1 && nums[0] == 1) {
        //     return 1;
        // }
        // if (n == 1 && nums[0] == 0) {
        //     return 0;
        // }
        for (int i = 0 ; i < n ; i++) {
            if (i == n-1 && nums[i] == 1) {
                count++;
                max_count = max(count,max_count);
                // vec.push_back(count);
            }
            if (nums[i] == 1) {
                count++ ; }
            else {
                // vec.push_back(count);
                max_count = max(count,max_count);
                count = 0;
            }
        }
        // int max = *max_element(vec.begin(), vec.end());
        return max_count;
    }
};