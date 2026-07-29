// Problem : num[i] + num[j] == target return i and j from array 
// type : easy 

// brute fore 
// 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0 ; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {-1};
     }
};

// better ( best )
// 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       unordered_map<int , int> mpp;
       int second = 0;
       int first = 0;
       for (int i =0 ; i < n ; i++) {
            first = nums[i];
            second = target - first;
            if (mpp.find(second) != mpp.end()) {
                return{i,mpp[second]};
            }
            mpp[first] = i;
       }
       return {-1}; 
    }
};

// optimal 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        // sort(nums.begin(), nums.end());
        // left right return karne ke liye phele num and i ko save karo 2d array main the sort 
        // sort(eleIndex.begin(), eleIndex.end(), [](const vector<int>& a, const vector<int>& b) {
        //    return a[0] < b[0]; 
        // });

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return {1,1};
            }
            if (sum > target) {
                right--;
                // left--;
            }
            if (sum < target) {
                left++;
                // right++;
            }
        }
        return {-1,-1};
    }
};