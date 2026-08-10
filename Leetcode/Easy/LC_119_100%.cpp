// Leetcode_119 : pascal triangle 2
// link : https://leetcode.com/problems/pascals-triangle-ii/
// Beast : 100%
// Example:
// Input: rowIndex = 3
// Output: [1,3,3,1]

// Code : 

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec;
        long long  ele = 1;
        for (int j = 1 ; j <= rowIndex+1 ; j++) {
            if (j == 1 || j == rowIndex+1) {
                vec.push_back(1);
                continue;
            }
            ele = ele * ((rowIndex+1)-(j-1));
            ele = ele / (j-1);
            vec.push_back(ele);
            // ele = 1;
        }
        return vec;
    }
};