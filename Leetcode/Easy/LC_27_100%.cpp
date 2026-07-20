// Leetcode_27 : Remove Element from an array with there index also 
// beats 100%;
// link : https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int d = 0;
        vector<int> vec;
        for (int i=0 ; i < n; i++) {
            if (nums[i] == val) {
            //    nums.erase(nums.begin() + i );
            //    nums.insert(nums.begin() + i, -1);
                  continue;
            //    d++;
            //    i--;
            }
            else {
                vec.push_back(nums[i]);
                d++;
            }

        }
        nums.clear();
        for (int i = 0; i < d ; i++) {
            nums.push_back(vec[i]);
        }
    //    sort(nums.begin(), nums.end());
    //    for (int i= n-1 ; i >= 0; i--) {
    //         if (nums[i] != -1) {
    //             nums.erase(nums.begin(), nums.begin() + i-1);
    //             break;
    //         }
    //    }
       
        int k = nums.size();
        return k;
    }
};