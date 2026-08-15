// Leetcode_1492: The Kth factor of N
// Link : https://leetcode.com/problems/the-kth-factor-of-n/
// Beats : 100%
// Example : Input: n = 12, k = 3
// Output: 3
// Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.

Code : class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0 ;
        // if (k >= )
        for (int i = 1 ; i<=n; i++) {
            if (n % i == 0) {
                count++;
                if (count == k) {
                    return i;
                }
            }
        }
        return -1;
    }
};
