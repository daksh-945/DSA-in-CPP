// Leetcode_3345 : Return the smallest number greater than or equal to n such that the product of its digits is divisible by t.
// link : https://leetcode.com/problems/smallest-divisible-digit-product-i/
// beats : 100%
// Example : Input: n = 10, t = 2
// Output: 10
// Explanation:
// The digit product of 10 is 0, which is divisible by 2, making it the smallest number greater than or equal to 10 that satisfies the condition.

// Code : 
class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = n;
        int product= 1;
        while(true) {
            int x = i;
            product = 1;
            while (x > 0) {
                int temp = x%10;
                // sum += temp;
                product = product*temp;
                x = x/10;
            }
            if (product%t == 0) return i;
            else i++;
        }
        return 0;
    }
};