// Leetcode_507 : perfect number i.e number which is equal to sum of all its devisors 
// link : https://leetcode.com/problems/perfect-number/
// beats : 100%
// Example : Input: num = 28
// Output: true
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// 1, 2, 4, 7, and 14 are all divisors of 28.

// Code : 

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        if (num == 1 ) {
            return false ;
        }
        for (int i = 1 ;i*i <= num ; i++) {
            if (num % i == 0) {
                sum = sum + i;
                if (i == 1) {
                    continue;
                }
                sum = sum + num/i;
            }

        }
        if ( sum == num) {
            return true ;
        }
        return false ;
    }
};