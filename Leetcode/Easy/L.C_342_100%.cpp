// Leetcode_342 : Find if the given number is power of 4 or not 
// beats : 100%
// link : https://leetcode.com/problems/power-of-four/

// Example :
// Input: n = 16
// Output: true

// Code : 

class Solution {
public:
    bool isPowerOfFour(int n) {
        if ( n == 1) {
            return true ;
        }
        if ( n <= 0) {
            // n = n * -1;
            return false ;
        }
        while ( n > 1) {
            if (n % 4 == 0) {
                n = n / 4;
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
};