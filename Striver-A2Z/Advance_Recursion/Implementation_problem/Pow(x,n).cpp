// Problem : find power of x ^ n;
// type : easy 

// code : 

// 50
class Solution {
public:
    double myPow(double x, int n) {
        //your code goes here
        if ( n == 0) {
            return 1;
        }
        if ( n > 0) {
            return x * pow(x , n-1);
        }
        else {
            return (1/x) * pow(x, n+1);
        }

    }
};