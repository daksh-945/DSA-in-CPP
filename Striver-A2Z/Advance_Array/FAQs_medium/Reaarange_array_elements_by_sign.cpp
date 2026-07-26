// Problem : Rearrange array elemnts by sign in paticular order
// type : medium 
// L.C 2149

// code : 

// L.c 2149

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        int n = nums.size();
        for (int i= 0; i < n ; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
            if (nums[i] >= 0) {
                pos.push_back(nums[i]);
            }
        }
        int p = 0 , ne = 0;
        for (int i = 0 ; i < n/2; i++) {
            ans.push_back(pos[p]);
            ans.push_back(neg[ne]);
            p++;
            ne++;
        }
        return ans;
    }
};

