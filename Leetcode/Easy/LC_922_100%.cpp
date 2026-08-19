// Leetcode_922 : sort array by even odd order;
// link : https://leetcode.com/problems/sort-array-by-parity-ii/
// beats : 100%
// Example : Input: nums = [4,2,5,7]
// Output: [4,5,2,7]
// Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.

// Code : 

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int mxx = *max_element(nums.begin(), nums.end());
        vector<int> hash(mxx+1, 0) ;
        vector<int> vec(n,0);
        for (int i= 0 ; i < n ; i++) {
            hash[nums[i]]++;
        }
        int i = 0;
        int k = 1;
        for (int j = 0 ;j < mxx+1 ; j++) {
            if (j%2 == 0 && hash[j] > 0) {
                vec[i] = j;
                i = i+2;
                hash[j]--;
                j--;
                continue;
            }
            if (j%2 != 0 && hash[j] > 0) {
                vec[k] = j;
                k = k+2;
                hash[j]--;
                j--;
                continue;
            }
        }
        return vec;
    }
};