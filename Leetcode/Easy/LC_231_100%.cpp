// Leetcode_231 : Power of two 
// Beats : 100%
// Link : https://leetcode.com/problems/power-of-two/
// Example : Input: n = 1
// Output: true
// Explanation: 2^0 = 1

// Code : 
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if ( n == 1) {
            return true;
        }
        if ( n < 1) {
            return false;
        }
        while ( n > 1) {
            if (n % 2 != 0) {
                return false;
            }
            n = n/2;
         }
         return true;
    }
};