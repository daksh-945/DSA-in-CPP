// Leetcode_338 : Counting bits
// Link : https://leetcode.com/problems/counting-bits/
// Example : Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
// Beats : 100%

// Code : 

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec;
        int c = 0;
        for (int i= 0; i <= n; i++) {
            if ( i == 0) {
                vec.push_back(0);
                continue;
            }
            int j = i;
            while(j != 0) {
                j = j & (j-1);
                c++;
            }
            vec.push_back(c);
            c = 0;
        }
        return vec;
    }
};