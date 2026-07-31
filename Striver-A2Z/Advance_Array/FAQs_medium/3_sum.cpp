// Problem:  find unqie three element whose sum is zero 
// type : medium 

// code :

// 1:
// 15
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for (int i= 0; i < n ; i++)  {
            for (int j = i+1 ; j < n ;j++) {
                for (int k = j+1 ; k < n ; k++) {
                    // if (i == j || j == k || i == k) {
                    //     continue;
                    // }
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(), temp.end());
                         st.insert(temp);
                    }
                }
            }
            // st.clear();
        }

        // ans.push_back(st);
        vector<vector<int>> ans(st.begin(), st.end());
        // int x = ans.size();
        // for (int i = 0. ;i < x ; i++) {
        //     sort(ans[i].begin(), ans[i].end());
        // }
        return ans;
    }

};

// 2
// 15
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // a + b + c = 0 
        // then a + b = -c ;
        int n = nums.size();
        set<vector<int>> st;
        vector<vector<int>> ans;
        set<int> hash;
        for (int i = 0 ; i < n ; i ++) {
            for (int j = i+1 ; j < n ; j++) {
                int third = -(nums[i] + nums[j]);
                if (hash.find(third) != hash.end()) {
                    vector<int> temp = {nums[i], nums[j], third} ;
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[j]);
            }
            hash.clear();
        }
        // ans(st.begin(), set.end());?
        ans = vector<vector<int>>(st.begin(), st.end());
        return ans;
    }
};

// 3
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        // set<vector<int>> st;
        sort(nums.begin(), nums.end());
        // -3 , -2 , 0 , 2 , 3 ,5 
        vector<vector<int>> ans;
        for (int i = 0 ; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    vector<int> temp = {nums[i], nums[j] , nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while ( j < k && nums[k] == nums[k+1]) k--;
                }


            }
        }
        return ans;
    }
};