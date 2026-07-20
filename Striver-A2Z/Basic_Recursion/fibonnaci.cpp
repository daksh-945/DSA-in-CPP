// Porblem_10 : fibbonacci series i.e sum of last two itteration of series ;
// series = 0 1 1 2 3 5 ....
// type : easy


class Solution {
public:
    int fib(int n) {
        //your code goes here
        if ( n == 0) {
            return 0;
        }
        if ( n == 1) {
            return 1;
        }
        return fib(n-1) + fib(n-2);
    }
};