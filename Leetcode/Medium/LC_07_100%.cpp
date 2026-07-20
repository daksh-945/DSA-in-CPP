// Leetcode_07 : Reverse integer 
// link : https://leetcode.com/problems/reverse-integer/
// beats : 100%
class Solution {
public:
    int reverse(int x) {
        // int sign = 1 ;

        // if ( x < 0) {
        //     sign = 0;
        //     x = x * -1;
        // }
        // int temp = 0 ;
        // INT_MAX = 2147483647
        // INT_MIN = -2147483648
        int num = 0 ;
        while ( x != 0) {
            // temp = x % 10;
            if (num > INT_MAX/10 || num < INT_MIN/10) {
                return 0;
            }
            // if ((num == INT_MAX/10 && x%10 > 7) || num == INT_MIN/10 && x%10 < -8) {
            //     return 0;
            // }
            num = num * 10 + x%10 ;
            x = x/10;
        }
        // if (sign == 0) {
        //     num = num * -1;
        // }
        return num;
        
    }
};