// Leetcode_1281 : Subtract the product and sum of the digits 
// Link : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// beats: 100%
// Example : Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15

// Code : 

class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0;
       while (n > 0) {
        int temp = n%10;
        p = p*temp;
        s = s + temp;
        n = n/10;
       } 
       int r = p - s;
       return r;
    }
};