// Leetcode_1295 : count the number with total even places from the array 
// link : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Beats : 100%
// Example : Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.


// Code : 
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0 ; i < n; i++) {
            if ((nums[i] > 9 && nums[i] < 100) || (nums[i] > 999 && nums[i] < 10000) || (nums[i] > 99999 && nums[i] < 1000000)) {
                count++;
            }
        }
        return count;
    }
};