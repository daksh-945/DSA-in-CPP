// Problem_08: Check for Perfect Number (1 + 2 + 3 = 6) { all divisor addition == actual numbers }
// Type : Easy

class Solution {
public:
    bool isPerfect(int n) {
        // int x = n;
        int new_num = 0;
        if (n == 1) {
            return false;
        }
        for(int i =1 ; i < n ; i++ ) {
            if ( n % i == 0) {
                new_num = new_num + i;
                // n = n / i;
            }
        }
        if ( new_num == n) {
            // cout << new_num;
            return true;
        }
        else {
            return false;
        }
    }
};