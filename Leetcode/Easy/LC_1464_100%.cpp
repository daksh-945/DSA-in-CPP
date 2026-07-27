// Leetcode_1464 : Maximum product of two element in array 
// link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// beats : 100%

// Example :
// Input: nums = [3,4,5,2]
// Output: 12 
// Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 

// Code : 

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return (nums[n-1]-1) * (nums[n-2]-1);
    }
};