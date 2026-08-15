// Leetcode_1822 : Sign of the product of an array
// Link : https://leetcode.com/problems/sign-of-the-product-of-an-array/
// Beats : 100%
// Example : Input: nums = [-1,-2,-3,-4,3,2,1]
// Output: 1
// Explanation: The product of all values in the array is 144, and signFunc(144) = 1

// Code : 
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative = 0;
        int n = nums.size();
        for (int i = 0 ; i <n; i++) {
            if (nums[i] < 0) {
                negative++;
            }
            if (nums[i] == 0) {
                return 0;
            }
        }
        if (negative % 2 == 0) {
            return 1 ;
        }
        else return -1;
    }
};