// Leetcode_628 : Maximum product of three numbers 
// https://leetcode.com/problems/maximum-product-of-three-numbers/
// beats : 45%
// Example :
// Input: nums = [1,2,3]
// Output: 6

// code : 

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if ( n == 0 ) {
            return nums[0];
        }
        if ( n == 1) {
            return nums[0] * nums[1];
        }
        sort(nums.begin(), nums.end());
        int d = nums[0] * nums[1] * nums[n-1] ;
        int c = nums[n-1]*nums[n-2]*nums[n-3];
        if ( c >= d ) {
            return c;
        }
        return d;
    }
};