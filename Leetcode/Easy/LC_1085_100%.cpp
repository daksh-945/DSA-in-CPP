// Leetcode_1085 : Sum of digits in a minimum number
// Link : https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/
// Beats : 100%
// Example : Input: nums = [34,23,1,24,75,33,54,8]
// Output: 0
// Explanation: The minimal element is 1, and the sum of those digits is 1 which is odd, so the answer is 0.

// Code : 
class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int n = nums.size();
        int mnn = *min_element(nums.begin(),nums.end());
        int sum = 0;
        while (mnn > 0) {
            int temp = mnn % 10;
            sum += temp;
            mnn = mnn /10;
        }
        if (sum % 2 == 0) {
            return 1;
        }
        else return 0;
    }
};