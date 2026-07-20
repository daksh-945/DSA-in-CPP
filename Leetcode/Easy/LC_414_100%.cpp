// Leetcode_414 : Third Maximum Number from array;
// beats : 100%

class Solution {
public:

// optimisation karni bakki hai , baki ess problem ka solution papa se discuss karte hue papa ne de diya tah ...

    int thirdMax(vector<int>& a) {
        int n = a.size();
        int max = 0 , max2 = 0 , max3 = 0;
        if (n >= 3) {
            // for (int i= 0 ;i <n; i++) {
            //     for (int j = 0 ; j < n-i-1 ; j++) {
            //         if (a[j] > a[j+1]) {
            //             int temp = a[j];
            //             a[j] = a[j+1];
            //             a[j+1] = temp;
            //         }
            //     }
            // }
            sort(a.begin(), a.end());
            vector<int> vec;
            int dup = 0;
            for (int i = 0 ; i < n; i++) {
                if (i == n-1) {
                    vec.push_back(a[i]);
                    dup++;
                    continue;
                }
                if (a[i] == a[i+1]){
                    continue;
                }
                vec.push_back(a[i]);
                dup++;
            }
            if (vec.size() < 3) {
                int max = *max_element(vec.begin(), vec.end());
                return max;
            }
            int max = vec[dup -3];
            return max;
        }
        if (n < 3) {
            // int max ;
            if ( n == 1) {
                return a[0];
            }
            else {
                if (a[0] > a[1]) {
                    return a[0];
                }
                else return a[1];
            }
        }
        return 0;
    }
};