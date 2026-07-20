// Leetcode_14 : Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

// type : easy 
// Beats : 100% 

// CODE :: 

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        int min = INT_MAX;
        for (int i =0; i < n; i++) {
            if (min > str[i].size()) {
                min = str[i].size();
            }
        }
        string vec;
        if (n == 1) {
            for (int i=0 ; i < min ; i++) {
                vec.push_back(str[0][i]);
            }
            return vec;
        }
        int count = 0;
        for (int i = 0 ; i < min ; i++) {
            count = 0;
            for (int j = 0 ; j < n; j++) {
                if (str[0][i] == str[j][i]) {
                    count++;
                }
            }
            if (count == n) {
                vec.push_back(str[0][i]);
            }
            else {
                return vec;
            }

        }
        return vec;
    }
};