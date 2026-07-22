// Maximum consecutive 1's
// code

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int x = 0;
        vector<int> vec;
        for (int i =0;i <n; i++) {
            
            if (count == 1 && nums[i] != 1) {
                vec.push_back(x);
                x = 0;
                count = 0;
                // ans = max(ans,x) ; 
                // second approch where vec not needed /
            }
            if (nums[i] == 1) {
                x++;
                count = 1;
            }
            
        }
        if (x > 0) {
            vec.push_back(x);
            x = 0;
        }
        if (vec.empty()) {
            return 0;
        }
        int ans = *max_element(vec.begin(), vec.end());
        return ans;
    }
};