// Leetcode_2119: A number after the double reversal 
// Link : https://leetcode.com/problems/a-number-after-a-double-reversal/
// Beats : 100%
// Example : Input: num = 526
// Output: true
// Explanation: Reverse num to get 625, then reverse 625 to get 526, which equals num.

// Code : 

class Solution {
public:
    bool isSameAfterReversals(int num) {
        int c = 0;
        if (num == 0) {
            return true;
        }
        // while (num > 0) {
            int temp = num%10;
            if (temp == 0) {
                return false ;
            }
            else {
                return true;
            }
        // }
        return true;
    }
};
