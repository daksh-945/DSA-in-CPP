// Leetcode_2769: Find the maximum arhievable number]
// link : https://leetcode.com/problems/find-the-maximum-achievable-number/
// Beats : 100%
// Example : Input: num = 4, t = 1
// Output: 6
// Explanation:
// Apply the following operation once to make the maximum achievable number equal to num:
// Decrease the maximum achievable number by 1, and increase num by 1.

// Code :

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + t*2;
    }
};