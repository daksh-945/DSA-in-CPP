// Leetcode_48: Rotate a matrix 
// link : https://leetcode.com/problems/rotate-image/
// Beats : 100%
// Example: Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

// Code : 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0 ; i < n-1 ; i++) {
            for (int j = i ; j < m ; j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i = 0 ; i < n; i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }
}
};
