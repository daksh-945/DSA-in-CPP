// Problem_10: Count Prime Number Till N;
// Type: Easy


class Solution {
public:
// learning input ko kabhi modify mat karo okayyy 
    int primeUptoN(int n) {
        int count = 0;
        int prime_number = 0;
        for (int i = 1 ; i <= n; i++) {
            count = 0;
            if (i == 1)  {
                // return false;
                count = 1;
            }
            // if (i == 2) {
            //     // return true;
            //     count = 0;
            // }
            for (int j = 2 ; j < i ; j++) {
                if (i % j == 0) {
                    count = 1;
                    break;
                }
            }
            if ( count == 0) {
                prime_number++;
            }
        }
        return prime_number;
    }
};