// Problem : Length of last word in a string .
// Difficulty : even at last too many spaces may exist . 
// beats : 100%

// code :

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        string ch;
        vector<string> vec;
        // ch.push_back(' ');
        for (int i=0 ;i < n; i++) {
            if (s[i] != ' ') {
                ch.push_back(s[i]);
            }
            if (i == n-1) {
                if (ch.empty()) {
                    continue;
                }
                vec.push_back(ch);
                continue;
            }
            if (s[i] == ' ') {
                if (ch.empty()) {
                    continue;
                }
                vec.push_back(ch);
                ch.clear();
            }

        }
        int x = vec.size();
        int lgth = vec[x-1].size();
        return lgth;
    }
};
