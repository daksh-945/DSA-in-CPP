// Leetcode_189 : rotate array to right shifts 
// link : https://leetcode.com/problems/rotate-array/
// beats : 100%

// code :

class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        vector<int> vec ;
        if (n == 0) {
            return ;
        }
        k = k % n;
        for (int i= n-k ; i < n ; i++) {
            vec.push_back(a[i]);
        }
        // for (int i= n-1 ;  i > n-k-1; i--) {
        //     a[i] = a[k];
        //     k++   
        // }
        // int x = 0;
        for (int i= n-1 ; i >= k ; i--) {
            a[i] = a[i- k];
            // x++;
        }
        for (int i= 0; i< k ;i++) {
            a[i] = vec[i];
        }

    }
};