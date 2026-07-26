// Leetcode_258 : Add digits of n until sum < 10;
// beats : 100%;
// link : https://leetcode.com/problems/add-digits/
// Example : Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

// Code : 

class Solution {
public:

    int sum(int num) {
        int sm = 0;
        while (num > 0) {
            int temp = num%10;
            sm = sm + temp;
            num = num/10;
        }
        if (sm > 9) {
            return sum(sm);
        }
        return sm;
    }

    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        int x = sum(num);
        return x;
    }
};