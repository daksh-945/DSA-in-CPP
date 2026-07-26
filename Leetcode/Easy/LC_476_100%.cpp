// Leetcode_476 : Number complement 
// link : https://leetcode.com/problems/number-complement/
// beats : 100%
// Example : 
// Input: num = 5
// Output: 2
// Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

// Code : 

class Solution {
public:
    int findComplement(int num) {
        if (num == 0) {
            return 1;
        }
        if ( num == 1) {
            return 0;
        }
        vector<int> vec;
        while (num > 0) {
            if (num % 2 == 0) {
                vec.push_back(1);
            }
            else {
                vec.push_back(0);
            }
            num = num / 2;
        }
        // reverse(vec.begin(), vec.end());
        int n = vec.size();
        int ans = 0 ;
        int k = 0;
        for (int i = 0 ; i < n ; i++) {
            if (vec[i] == 1) {
                ans = ans + pow(2,k);
                k++;
                continue;
            }
            k++;
        }
        return ans;
    }
};