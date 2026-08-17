// LC_1133: Largest unique number
// Beats : 100%
// link : https://leetcode.com/problems/largest-unique-number/
// Example : Input: nums = [5,7,3,9,4,9,8,3,1]
// Output: 8

class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        int n = nums.size();
        int mxx = *max_element(nums.begin(), nums.end());
        vector<int> hash(mxx+1, 0);
        for (int i= 0 ;i < n; i++) {
            hash[nums[i]]++;
        }
        for (int j = mxx ; j >= 0 ; j--) {
            if (hash[j] == 1) {
                return j;
            }
        }
        return -1;
    }
};