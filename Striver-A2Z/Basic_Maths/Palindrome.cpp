// Problem_04 : check the numer is palindrome or not;
// type : Easy;

class Solution {
public:
    bool isPalindrome(int n) {
        int num = 0;
        int x = n;
        while (n != 0) {
            int temp = n%10;
            num = num*10 + temp;
            n = n/10;
        }
        if (num == x) {
            return true;
        }
        else return false;
    }
};