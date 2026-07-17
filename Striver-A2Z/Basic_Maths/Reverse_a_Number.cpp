// Problem_03 : Reverse a Number ;
// Type : Easy

class Solution {
public:
    int reverseNumber(int n) {
        int num = 0;
        while ( n != 0) {
            int temp = n%10;
            num = num*10 + temp;
            n = n/10;
        }
        return num;
    }

};