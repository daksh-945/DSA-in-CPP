// Leetcode_18: 4sum == target 
// link : https://leetcode.com/problems/4sum/
// Beats : 54%
// Example :Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

// Code :

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> vec ;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            for (int j = i+1 ; j < n;  j++) {
                if (j > i+1 && nums[j] == nums[j-1]) {
                    continue;
                }
                int k = j+1;
                int l = n-1;
                while (k < l) {
                    long long sum = 1ll * nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vec.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k-1]) {
                            k++;
                        }
                        while (k < l && nums[l] == nums[l+1]) {
                            l--;
                        }
                    }
                    else if (sum > target) {
                        l--;
                    }
                    else {
                        k++;
                    }
                }
                    

                }
            }
        return vec;
        }
    };
