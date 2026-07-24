// Leetcode_389 : Find the difference in two strings 
// link : https://leetcode.com/problems/find-the-difference/
// beats : 100%

// code :

class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
        // char mxx = *max_element(s.begin(), s.end())+1;
        // char mxx2 = *max_element(t.begin(),t.end()) +1 ;
        vector<int> hash1(150, 0);
        vector<int> hash2(150, 0);
        for (int i=0 ; i < n; i++) {
            hash1[s[i]]++;
        }
        for (int i= 0 ; i < n + 1 ; i++) {
            hash2[t[i]]++;
        }
        char c;
        // char mxxx = max(mxx , mxx2);
        for (int i= 20 ; i < 150 ; i++) {
            if ( hash1[i] == hash2[i] ) {
                continue;
            }
            c = i;
        }
        return c;
    }
};