// Leetcode_81 : Search a element in an rotated array 
// link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Beats : 100%
// Example : Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true

// Code : 

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (find(nums.begin(), nums.end(), target) != nums.end()) {
            return true;
        }
        else {
            return false;
        }
    }
};