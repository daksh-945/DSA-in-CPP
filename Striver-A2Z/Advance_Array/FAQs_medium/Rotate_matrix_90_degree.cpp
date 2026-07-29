// Probelm : rotate a matrix 90 degree 
// type : medium

// 2 approch 
// we can make a another matrix and and got required matrix there then copy paste  
// tc = n2 and sc = n2
// else 
// we can transpose gieven matrix first 
// the reverse each row 
// tc = n2 and sc = 1

// Code1 :
// 48
class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> vec;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> temp;
        // int left = 0, right = m-1, top = 0, bottom = n-1;
        for (int i = 0 ; i < m; i++) {
            for (int j = n-1 ; j >= 0 ; j--) {
                temp.push_back(matrix[j][i]);
            }
            vec.push_back(temp);
            temp.clear();
            // j++;
        }
        matrix.clear();
        for (int i = 0 ;i < n ;i++) {
            matrix.push_back(vec[i]);
        }
    }
};

// Code2 :

class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0 ; i < n-1; i++) {
            for (int j= i+1 ; j < m ; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0 ; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};