// Leetcode_496 : Next greater element I 
// link : https://leetcode.com/problems/next-greater-element-i/ 
// examples : Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.

// code : 

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> vec;
        int count = 0;
        for (int i = 0 ; i < n1; i++) {
            count = 0;
            for (int j = 0 ; j < n2 ; j++) {
                if (nums1[i] == nums2[j]) {
                  for ( int k = j+1 ; k < n2 ; k++) {
                    if (nums2[j] < nums2[k]) {
                        vec.push_back(nums2[k]);
                        count = 1;
                        break;
                    }
                  }
                  if (count == 0) {
                        vec.push_back(-1);
                    }
                }
            }
        }
        return vec;
    }

};