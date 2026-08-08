// Leetcode_566 : Reshape the matrix
// Link : https://leetcode.com/problems/reshape-the-matrix/
// Beats : 100%
// Example : Input: mat = [[1,2],[3,4]], r = 1, c = 4
// Output: [[1,2,3,4]]

// code :

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> vec(r , vector<int>(c,0));
        int n = mat.size();
        int m = mat[0].size();
        int l = 0 , k = 0;
        if (n*m != r*c) {
            return mat;
        }
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ;j < m ; j++) {
                vec[l][k] = mat[i][j];
                k++;
                if (k >= c) {
                    k = 0;
                    l++;
                } 
            }
        }
        return vec;
    }
};