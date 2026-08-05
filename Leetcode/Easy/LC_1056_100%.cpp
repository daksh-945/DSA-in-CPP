// Leetcode_1056 : Confusing number
// link : https://leetcode.com/problems/confusing-number/
// beats : 100%
// Example : Input: n = 6
// Output: true
// Explanation: We get 9 after rotating 6, 9 is a valid number, and 9 != 6.
// Example 2: Input: n = 11
// Output: false
// Explanation: We get 11 after rotating 11, 11 is a valid number but the value remains the same, thus 11 is not a confusing number
// Example 3: Input: n = 89
// Output: true
// Explanation: We get 68 after rotating 89, 68 is a valid number and 68 != 89.

// Code : 

class Solution {
public:
    bool confusingNumber(int n) {
        int num = 0;
        // int x = n;
        int count = 0;
        // while (x > 0) {
        //     count++;
        //     x = x/10;
        // }
        int k = n;
        while (k > 0) {
            int temp = k%10;
            if (temp == 2 || temp == 3 || temp == 4 || temp == 5 || temp == 7) {
                return false;
            }
            else {
                switch (temp) {
                    case 0 : temp = 0; break;
                    case 1 : temp = 1; break;
                    case 6 : temp = 9 ; break;
                    case 8 : temp = 8 ; break;
                    case 9 : temp = 6 ; break;
                }
                num = num*10 + temp;
                count++;
            }
            k = k/10;
        }
        int l = num;
        while (l > 0) {
            int w = l%10;
            if (w >= 0 && w <= 9) {
                l = l/10;
                continue;
            }
            else {
                return false;
            }
        }
        if (num == n) {
            return false;
        }
        return true;
    }
};