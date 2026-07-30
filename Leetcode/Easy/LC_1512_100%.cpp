// Leetcode_1512 : Number of good pairs 
// link : https://leetcode.com/problems/number-of-good-pairs/
// beats : 100%
// Example: Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed

// Code :

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int left = 0; 
        int right = n-1;
        int count =0;
        while (left < right) {
            if (nums[left] == nums[right]) {
                count++;
            }
            right--;
            if (left == right && left < n-1) {
                left++;
                right = n-1;
            }
        }
        return count;
    }
};