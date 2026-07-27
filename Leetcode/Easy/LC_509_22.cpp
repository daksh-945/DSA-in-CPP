// Leetcode_509: Fibonnaci series 
// beats : 22%
// link : https://leetcode.com/problems/fibonacci-number/
// Example :Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

// code :

class Solution {
public:
    int fib(int n) {
        if ( n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return fib(n-1) + fib(n-2);
    }
};