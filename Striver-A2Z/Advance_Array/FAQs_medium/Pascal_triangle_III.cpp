// Problem : pascal triangle III return full triangle in O(n^2)
// type : medium

// Code:

class Solution {
public:
    vector<int> Row_return(int row) {
        vector<int> vec;
        vec.push_back({1});
        int temp = 1;
        for (int i = 1; i < row; i++) {
            temp = temp*(row-i);
            temp = temp/i;
            vec.push_back(temp);
        }
        return vec;

    }
    vector<vector<int>> pascalTriangleIII(int n) {
            vector<vector<int>> ans;
            for (int i= 1 ; i <= n ; i++) {
                ans.push_back(Row_return(i));
            }
            return ans;
    }
};