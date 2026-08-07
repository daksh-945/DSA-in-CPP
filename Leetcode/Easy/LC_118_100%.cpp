// Leetcode_118 : Pascal Triangle 1
// link : https://leetcode.com/problems/pascals-triangle/
// Beats : 100%
// Example : Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

// Code : 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        int ele = 1;
        for (int i= 1 ; i <= numRows; i++) {
            vector<int> temp;
            for (int j = 1 ; j <= i ; j++ ) {
                // ele = 1;
                if ( j == 1) {
                    temp.push_back(1);
                    continue;
                }
                if (j == i) {
                    temp.push_back(1);
                    continue;
                }
                ele = ele * (i-(j-1));
                ele = ele / (j-1);
                // while (i >= 1)
                temp.push_back(ele);
            }
            vec.push_back(temp);
            ele = 1;
        }
        return vec;
    }
};