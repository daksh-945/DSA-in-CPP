// Leetcode_1979: Find Greatest Common Divsior Of Array;
// link : https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// beats: 100%


class Solution {
public:
    int findGCD(vector<int>& a) {
        int n = a.size();
        // for (int i= 0 ; i < n; i++) {
        //     int temp = 0;
        //     for (int j = 0 ; j < n-i-1 ; j++){
        //         if ( a[j] > a[j+1]) {
        //             temp = a[j];
        //             a[j] = a[j+1];
        //             a[j+1] = temp;
        //         }
        //     }
        // }
        auto max = *max_element(a.begin(), a.end());
        auto min = *min_element(a.begin(), a.end());
        int c = 1;
        while ( c != 0) {
            c = max % min;
            max = min;
            min = c;
        }
        return max;
       
    }
};