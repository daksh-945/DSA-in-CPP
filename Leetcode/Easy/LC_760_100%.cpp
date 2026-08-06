// Leetcode_760: find anagram mapping
// link : https://leetcode.com/problems/find-anagram-mappings/
// beats : 100%
// Example : Input: nums1 = [12,28,46,32,50], nums2 = [50,12,32,46,28]
// Output: [1,4,3,2,0]
// Explanation: As mapping[0] = 1 because the 0th element of nums1 appears at nums2[1], and mapping[1] = 4 because the 1st element of nums1 appears at nums2[4], and so on.

// Code : 

class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int j = 0;
        vector<int> vec;
        for (int i = 0 ; i < n; i++) {
            j= 0;
            while (nums1[i] != nums2[j] && j < n) {
                j++;
                if (find(vec.begin(), vec.end(), j) != vec.end()) {
                    j++;
                }
            }
            vec.push_back(j);   
        }
        return vec;
    }
};