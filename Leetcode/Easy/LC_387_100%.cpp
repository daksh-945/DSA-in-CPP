// Leetcode_387 : First unique character in a string 
// link : https://leetcode.com/problems/first-unique-character-in-a-string/
// Beats : 100%
// Example : Input: s = "loveleetcode"
// Output: 2

// Code :

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> hash(150,0);
        for (int i = 0 ; i < n; i++) {
            hash[s[i]]++;
        }
        for (int i = 0 ; i < n ; i++) {
            char ch = s[i];
            if (hash[ch] == 1) {
                return i;
            }
        }
        return -1;
    }
};