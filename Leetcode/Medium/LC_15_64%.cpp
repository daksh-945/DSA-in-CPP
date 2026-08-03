// Leetcode_15 : 3Sum = 0 
// link : https://leetcode.com/problems/3sum/
// Beats 64%
// Example : Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.

// Code :

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        // vector<int> vec ;
        vector<vector<int>> vec2 ;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < n; i++) {
        int j = i+1;
        int k = n-1; 
            if (i > 0 && nums[i] == nums[i-1]) {
                // i++;
                continue;
            }
            while(j < k) {
                long long sum = 1ll * nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    // vec.push_back(nums[i], nums[j], nums[k]);
                    vec2.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                    k--;
                    while (j < k && nums[k] == nums[k+1]) {
                        k--;
                    }
                }
                else if ( sum < 0) {
                    j++;
                    while (j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                }
                else {
                    k--;
                    while (j < k && nums[k] == nums[k+1]) {
                        k--;
                    }
                }
            }
        }   
        return vec2;
        // for (int i = 0 ; i < n; i++) {
        //     for (int j = i + 1; j < n ; j++) {
        //         for (int k = j+1 ; k < n ; k++) {
        //             if (nums[i] + nums [j] + nums [k] == 0) {
        //                 int count = 0;
        //                 vec.push_back(nums[i]);
        //                 vec.push_back(nums[j]);
        //                 vec.push_back(nums[k]);
        //                 sort(vec.begin(), vec.end());
        //                 for ( auto i : vec2) {
        //                     if ( i == vec) {
        //                         vec.clear();
        //                         count = 2;
        //                     }
        //                 }
        //                 if (count == 0) {
        //                 vec2.push_back(vec);
        //                 vec.clear();
        //                 }
        //             }
        //         }
        //     }
        // }
        // return vec2;
    }
};