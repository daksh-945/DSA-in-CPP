// Leetcode_367: Valid prefect square 
// link : https://leetcode.com/problems/valid-perfect-square/
// beats : 100%
// Example : Input: num = 16
// Output: true
// Explanation: We return true because 4 * 4 = 16 and 4 is an integer

// Code :

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (int i = 1 ; i <= num/i ; i++) {
            if (i == num/i && num%i == 0) {
                // num/i = always give integer . 5 /2 = 2 not 2.5 
                return true;
            }
        }
        return false;
    }
};