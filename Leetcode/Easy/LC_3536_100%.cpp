// Leetcode_3536 : maximum product of two digit from n ;
// link : https://leetcode.com/problems/maximum-product-of-two-digits/
// Example 1:
// Input: n = 31
// Output: 3
// Explanation:
// The digits of n are [3, 1].
// The possible products of any two digits are: 3 * 1 = 3.
// The maximum product is 3.
// beats : 100%

// code 

class Solution {
public:
    int maxProduct(int n) {
        if ( n < 10) {
            return n;
        }
        vector<int> vec;
        while ( n > 0) {
            vec.push_back(n%10);
            n = n/10;
        }
        sort(vec.begin(), vec.end());
        int x = vec.size();
        int p = vec[x-1]*vec[x-2];
        return p;
    }
};