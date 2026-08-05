// Leetcode_2180 : Count integer with even digit sum 
// link : https://leetcode.com/problems/count-integers-with-even-digit-sum/
// beats: 100%
// Example : Input: num = 4
// Output: 2
// Explanation:
// The only integers less than or equal to 4 whose digit sums are even are 2 and 4.    

// Code :

class Solution {
public:
    int countEven(int num) {
        if (num == 1) {
            return 0;
        }
        int count = 0;
        for (int i = 2 ; i <= num ; i++) {
            int sum = 0;
            if (i < 10) {
                if (i % 2 == 0) {
                    count++;
                    continue;
                }
            }
            else {
                int k = i;
                while (k > 0) {
                    int temp = k % 10;
                    sum = sum + temp;
                    k = k / 10;
                }
                if ( sum % 2 == 0) {
                    count++;
                }
            }
        }
        return count;
    }
};