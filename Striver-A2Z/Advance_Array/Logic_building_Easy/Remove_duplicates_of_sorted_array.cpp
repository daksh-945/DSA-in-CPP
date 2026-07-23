// problem : Remove duplicates from sorted array 
// type : easy 

// code : 

// l.c = 26

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // approch 1 

        // int n = nums.size();
        // vector<int> vec;
        // for (int i= 0 ; i < n; i++) {
        //     if (i == n-1) {
        //         vec.push_back(nums[i]);
        //         break;
        //     }
        //     if (nums[i] == nums[i+1]) {
        //         continue;
        //     }
        //     else {
        //         vec.push_back(nums[i]);
        //     }
        // }
        // nums.clear();
        // int ans = 0;
        // for (int i = 0 ; i < vec.size(); i++) {
        //     nums[i] = vec[i];
        //     ans++;
        // }
        // return ans;

        // approch 2 
        int n = nums.size();
        set<int> s;
        for (int i : nums) {
           s.insert(i);
        }
        nums.clear();
        int j = 0;
        for (int x : s) {
            nums[j] = x;
            j++;
        }
        return j;
    }
};