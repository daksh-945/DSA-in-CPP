// Leetcode_344: Reverse a string
// link : https://leetcode.com/problems/reverse-string/
// beats : 100%

// code : 

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0 ;
        int right = n-1;
        // 
        while (left <= right) {
            int temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
         
    }
};