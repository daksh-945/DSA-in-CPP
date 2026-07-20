// Problem_88 : Merge Sorted Array 
// link : https://leetcode.com/problems/merge-sorted-array/
// beats : 100%


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> vec;
        // vec.insert(nums1.begin(), nums1.end());
        // vec.insert
        for (int i = 0 ; i < m ; i++) {
            vec.push_back(nums1[i]);
        }
        for (int i =0 ; i < n ; i++) {
            vec.push_back(nums2[i]);
        }
        for (int i= 0 ; i < n+m ; i++) {
            for (int j = 0 ; j < n+m - i - 1 ; j++) {
                if (vec[j] > vec[j+1]) {
                    int temp = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = temp;
                }
            }
        }
        for (int i=0 ; i < n+m; i++){
            nums1[i] = vec[i];
        }
    }
};