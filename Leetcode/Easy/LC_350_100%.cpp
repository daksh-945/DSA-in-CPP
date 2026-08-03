// Leetcode_350 : Intersection of two array 
// link : https://leetcode.com/problems/intersection-of-two-arrays-ii/
// beats : 100%
// Example : Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]

// Code :

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> vec;
        // for (int i = 0 ; i < n; i++) {
        //     for (int j = 0 ; j < m; j++) {
        //         if (nums1[i] == nums2[j]) {
        //             vec.push_back(nums1[i]);
        //             nums1[i] = -1;
        //             nums2[j] = -1;
        //             break;
        //         }

        //     }
        // }
        int max1 = *max_element(nums1.begin(), nums1.end());
        vector<int> hash1(max1+1, 0);
        int max2 = *max_element(nums2.begin(), nums2.end());
        vector<int> hash2(max2+1, 0);
        for (int i= 0 ; i < n; i++) {
            hash1[nums1[i]]++;
        }
        for (int j = 0 ; j < m; j++) {
            hash2[nums2[j]]++;
        }
        // int min1 = *min_element(nums1.begin(), nums1.end());
        // int min2 = *min_element(nums2.begin(), nums2.end());
        int mnn = min(max1, max2); 
        for (int k = 0 ; k <= mnn ; k++) {
            if (hash1[k] > 0 && hash2[k] > 0) {
                vec.push_back(k);
                hash1[k]--;
                hash2[k]--;
                k = k-1;

            }
        }
        return vec;
    }
    // esko sort karke ek barr 2 pointer se jarur karna please 
};