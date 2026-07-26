// Leetcode_347 : Top K frequent elements in an array 
// link : https://leetcode.com/problems/top-k-frequent-elements/
// beats : 14%
// example : Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

// Code : 

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<int> stt;
        for (int it : nums) {
            mpp[it]++;
        }
        int mxx = 0;
        for (int i = 0 ; i < k ; i++) {
            mxx = 0;
            for (auto y : mpp) {
                mxx = max(mxx , y.second);
            }
            for (auto& x : mpp) {
                if (mxx == x.second){
                    stt.push_back(x.first);
                    x.second = 0;
                    break;
                }
            }
        }
        return stt;
    }
};