// Leetcode_1903 : find Largest Odd integer in a string using substring 
// link : https://leetcode.com/problems/largest-odd-number-in-string/
// beats : 100%;

// code : 

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        // string odd_string;
        for (int i= n-1 ; i >= 0; i--) {
            if ((num[i]-'0') % 2 == 0 ) {
                num.erase(num.begin() + i, num.end());
                continue;
            }
            else {
                break;
            }
        }
        return num;
    }
};