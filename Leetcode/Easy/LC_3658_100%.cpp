// Leetcode_3658 : gcd of odd and even sums 
// link : https://leetcode.com/problems/gcd-of-odd-and-even-sums/
// beats : 100%;


class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sodd = 0 , seven = 0 ;
        // int c = 1;
        int codd = 0 , ceven = 0;
        for (int i = 1 ; ceven < n || codd < n; i++) {
            if (i % 2 == 0) {
                ceven++;
                seven = seven + i;
            }
            else {
                codd++;
                sodd = sodd + i;
            }
        }
        return gcd(seven,sodd);
    }
};