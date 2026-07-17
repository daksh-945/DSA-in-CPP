// Problem_02 : Count Number Of Odd Digit present in number 
// type : Easy 

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while (n != 0) {
            int temp = n % 10;
            if (temp%2 != 0) {
                count++;
            }
            n = n/10;
        }
        return count;
    }
};
