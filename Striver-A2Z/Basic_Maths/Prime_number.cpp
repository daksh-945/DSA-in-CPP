// Problem_09 : Check for Prime Number 
// type : Easy;


class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
        int count = 0;
        if ( n == 1 ) {
            return false ;
        }
        for (int i = 2 ; i < n ; i++) {
            if ( n % i == 0) {
                count = 1;
                break;
            }
        }
        if ( count == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};