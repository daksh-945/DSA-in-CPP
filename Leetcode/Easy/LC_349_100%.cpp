// Leetcode_349 : Intersection of two array 
// link : https://leetcode.com/problems/intersection-of-two-arrays/
// beats : 100% 
// example : Only unquie elements allowed 
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// code :

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int mxx1 = *max_element(nums1.begin(), nums1.end())+1;
        int mxx2 = *max_element(nums2.begin() , nums2.end())+1;
        int mnn = min(mxx1 , mxx2);
        vector<int> hash1(mxx1, 0);
        vector<int> hash2(mxx2, 0);
        vector<int> ans;
        for (int i= 0; i < n1 ; i++) {
            hash1[nums1[i]]++;
        }
        for (int i = 0; i < n2 ; i++ ) {
            hash2[nums2[i]]++;
        }
        for(int i= 0 ; i< mnn ; i++) {
            if (hash1[i] > 0 && hash2[i] > 0) {
                ans.push_back(i);
            }
        } 
        return ans;
    }
};