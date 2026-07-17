// Problem_12 : LCM of two numbers;
// type : Easy;


class Solution {
public:
    int LCM(int a,int b) {
        int gcd = 0;
        int c = 1, x = a, y = b;
        while ( c != 0) {
            c = a%b;
            a = b;
            b = c;
        }
        gcd = a;
        int lcm ;
        lcm = x * y / gcd;
        return lcm;
    }
};