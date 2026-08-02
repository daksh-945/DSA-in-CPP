// Leetcode_728: numbers that divide by all of its own digit. in list of 1 to n ;
// link : https://leetcode.com/problems/self-dividing-numbers/
// beats : 100%
// Example: Input: left = 1, right = 22
// Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]

// Code :

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        int con = 1;
         for (int i = left; i <= right; i++) {
            con = 1;
            if (i <10) {
                vec.push_back(i);
            }
            else {
                int x = i;
                while (x > 0) {
                    int temp = x % 10;
                    if (temp == 0) {
                        con = 0 ;
                        break;
                    }
                    if (i % temp != 0 ) {
                        con = 0;
                        break;
                    }
                    x = x / 10;
                }
                if ( con == 0) {
                    continue;
                }
                vec.push_back(i);
            }
        }
        return vec;
    }
};