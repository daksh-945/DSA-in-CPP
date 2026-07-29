// Leetcode_59: Spiral Matrix II
// link : https://leetcode.com/problems/spiral-matrix-ii/
// beats : 100%
// Example: Input: n = 3
// Output: [[1,2,3],[8,9,4],[7,6,5]]

// Code:

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // vector<int> vec;
        vector<vector<int>> ans(n, vector<int>(n));
        int left = 0 ;
        int right = n-1;
        int top = 0;
        int bottom = n-1;
        int k = 1;
        while (k <= pow(n,2)) {
            if (top <= bottom) {
                for (int i = left ; i <= right ; i++) {
                    // vec.push_back(k);
                    ans[top][i] = k;
                    k++;
                }
                top++;
                // ans.push_back(vec);
                // vec.clear();
            }
        if (left <= right ) {
            for (int i = top ; i <= bottom ; i++) {
                // vec.push_back(k);
                ans[i][right] = k;
                k++;
            }
            right--;
            // ans.push_back(vec);
            // vec.clear();/
        }
        if (top <= bottom) {
            for (int i = right ; i >= left ; i--) {
                // vec.push_back(k);
                ans[bottom][i] = k;
                k++;
            }
            bottom--;
            // ans.push_back(vec);
            // vec.clear();
        }
        if (left <= right) {
            for (int i = bottom ; i >= top ;i--) {
                // vec.push_back(k);
                ans[i][left] = k;
                k++;
            }
            left++;
            // ans.push_back(vec);
            // vec.clear();
        }
    }
    return ans;
    }
};