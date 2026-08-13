// Leetcode_1137 : Nth Tribonnaci number 
// Link : https://leetcode.com/problems/n-th-tribonacci-number/
// Beats : 100%
// Input: n = 4
// Output: 4
// Explanation:
// T_3 = 0 + 1 + 1 = 2
// T_4 = 1 + 1 + 2 = 4

// Code : 
class Solution {
public:
    int tribonacci(int n) {
        int a = 0 , b = 1 , c = 1;
        if ( n < 3) {
            if (n == 0) return 0;
            if (n == 1) return 1;
            if (n == 2) return 1;
        }
        int i = 3;
        long long sum = 0;
        while (i <= n ) {
            sum = a + b + c;
            // int temp = a;
            a = b ;
            b = c;
            c = sum ;
            i++;
        }
        return sum;
    }
};