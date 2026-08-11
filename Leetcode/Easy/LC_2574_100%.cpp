// Leetcode_2574: Left and right sum difference
// Link : https://leetcode.com/problems/left-and-right-sum-differences/
// Beats : 100%
// Example : Input: nums = [10,4,8,3]
// Output: [15,1,11,22]
// Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
// The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].

// Code : 

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int i = 0 ;
        int j = n-1;
        vector<int> vec1;
        vector<int> vec2;
        vector<int> ans;
        int sum = 0;
        while (i < n ) {
            if (i == 0) {
                vec1.push_back(0);
                sum += 0; 
                i++;
                continue;
            }
            // if (i == n) {
            //     sum += sum+nums[i-1];
            //     vec1.push_back(sum);
            //     i++;
            //     continue;
            // }
            sum = sum + nums[i-1];
            vec1.push_back(sum);
            i++;
        }
        sum = 0;
        while (j >= 0 ) {
            if (j == n-1) {
                vec2.push_back(0);
                sum += 0; 
                j--;
                continue;
            }
            // if ( j == -1) {
            //     sum = sum+nums[j+1];
            //     vec2.push_back(sum);
            //     j--;
            //     continue;
            // } 
            sum = sum + nums[j+1];
            vec2.push_back(sum);
            j--;
        }
        reverse(vec2.begin(),vec2.end());
        for (int i = 0 ; i < n; i++) {
            ans.push_back(abs(vec1[i] - vec2[i]));
        }
        return ans;
    }
};