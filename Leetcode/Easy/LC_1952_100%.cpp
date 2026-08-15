// Leetocde_1952: Three Divisors
// Link : https://leetcode.com/problems/three-divisors/
// Beast : 100%
// Example : Input: n = 2
// Output: false
// Explantion: 2 has only two divisors: 1 and 2.

// Code : 

class Solution {
public:
    bool isThree(int n) {
        int c = 0;
        for (int i= 1 ;  i <= n/i ; i++) {
            if (n%i == 0) {
                c++; 
                if (n/i != i) {
                    c++;
                }
            }
        }
        if (c == 3) {
            return true;
        }
        else {
            return false;
        }
    }
};