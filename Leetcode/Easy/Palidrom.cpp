// Problem_09 : Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        if ( x < 0) {
            return false;
        }
        long long newx = 0;
        // int j = 1;
        while ( x > 0) {
            int temp = x % 10;
            newx = newx * 10 + temp ;
            // j = j * 10;
            x = x/10;
        }
        if ( newx == y) {
            return true ;
        }
        else {
            return false ;
        }
    }
};
