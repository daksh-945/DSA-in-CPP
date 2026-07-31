// Problem : we have to find all set where target = sum of 4 elements in array 
// type : medium 

// code1 
// 18
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // a + b + c = x ;
        // x = target - sum 
        int n = nums.size();
        set<vector<int>> st;
        set<long long> hash;
        for (int i = 0 ; i < n; i++) {
            for (int j = i+1 ;  j < n; j++) {
                for (int k = j+1 ; k < n ; k++) {
                    long long sum = nums[i] + nums[j] + nums[k];
                    long long x = target - sum;
                    if (hash.find(x) != hash.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k] , x};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hash.insert(nums[k]);
                }
            hash.clear();
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

// code 2 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i+1 ; j< n; j++) {
                if ( j > i+1 && nums[j] == nums[j-1]) continue;  
                int k = j+1;
                int l = n-1;
                while(k < l) {
                long long sum = (long long) (nums[i] + nums[j] + nums[k] + nums[l]);
                if (sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k-1]) 
                    k++;
                    while ( k<l && nums[l] == nums[l+1]) l--;
                }
                else if (sum < target) {
                    k++;
                }
                else {
                    l--;
                }
                }
            }
        }
        return ans;
    }
};