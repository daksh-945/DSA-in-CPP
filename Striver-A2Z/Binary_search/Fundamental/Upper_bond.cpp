// Type : easy 
// problem : upper Bond > 

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int ans = n;
        while (left <= right) {
            int mid = (left+right)/2;
            if (nums[mid] == x) {
                left = mid+1;
                continue;
            }
            if (nums[mid] > x){
                ans = mid;
                right = mid-1;
                continue;
            } 
            if (nums[mid] < x) {
                left = mid+1;
                continue;
            }

        }
        return ans;
    }
};