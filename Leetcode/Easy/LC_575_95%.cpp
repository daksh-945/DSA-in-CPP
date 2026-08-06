// Leetcode_575: Different types of candies from array but less than n/2;
// link : https://leetcode.com/problems/distribute-candies/
// Beats : 95
// Example : Input: candyType = [1,1,2,2,3,3]
// Output: 3
// Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.

// Code 

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int limit = n/2;
        int eat= 0;
        if (n==0) {
            return 0;
        }
        if ( n == 1) {
            return 0;
        }
        sort(candyType.begin(), candyType.end());
        for (int i = 0 ; i < n-1; i++)  {
            if (candyType[i] == candyType[i+1]) {
                continue;
            }
            eat++;
            if (eat >= n/2) {
                return eat;
            }
        }
        eat++;
        return eat;
    }
};