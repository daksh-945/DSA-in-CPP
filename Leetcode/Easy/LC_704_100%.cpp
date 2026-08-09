// Leetcode_704 : Binary search
// Link : https://leetcode.com/problems/binary-search/
// Beats : 100%
// Example : Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4

// Code : 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low= 0;
        int n = nums.size();
        int high = n-1;
        while (low <= high) {
            int mid = (low + high)/2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }
        return -1;
    }
};