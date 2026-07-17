// Problem_06 : Factorial of a number 
// type : easy;


class Solution {
public:
    int factorial(int n) {
        int fact = 1;
        if ( n == 0) {
            return 1;
        }
        while (n > 0) {
            fact = fact * n;
            n--;
        }
        return fact;
    }
};
