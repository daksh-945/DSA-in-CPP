// Problem_242: Check valid anagram i.e check from character of s string the t string can be fromed or vice versa 
// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:
// Input: s = "rat", t = "car"
// Output: false
// link : https://leetcode.com/problems/valid-anagram/
// beats : 100%

// code :

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        vector<int> hash1(150 , 0);
        vector<int> hash2(150, 0);
        if (n1 != n2) {
            return false;
        }
        else {
            for (int i=0 ; i < n1 ; i++) {
                hash1[s[i]]++;
                hash2[t[i]]++;
            }
            for (int i= 20 ; i < 150 ; i++) {
                if (hash1[i] == hash2[i]) {
                    continue;
                }
                else {
                    return false;
                }
            }
            return true;
        }
    }
};