// Leetcode_54 : Spiral matrix 
// link : https://leetcode.com/problems/spiral-matrix/
// beats : 100%
// Eaxmple : Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]

// Code : 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0 , right = m-1 , top = 0 , bottom = n-1 ;
        int i = 0;
        vector<int> vec;
        while ( left <= right && top <= bottom ) {
            for (i = left ; i <= right ; i++) {
                vec.push_back(matrix[top][i]);
            }
            top++;
            for (i = top ; i <= bottom ; i++) {
                vec.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
            for (i = right ; i >= left ; i--) {
                vec.push_back(matrix[bottom][i]);
            }
            bottom--; }
            if (left <= right) {
            for (i = bottom ; i >= top ; i--) {
                vec.push_back(matrix[i][left]);
            }
            left++; }
        }
        return vec;
    }
};