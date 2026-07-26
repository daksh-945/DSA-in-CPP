// Problem : find majority element from the array , x > n/2
// type : easy 
// L.C : 169

// code1 : 
// L.C = 169

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int mxx = *max_element(nums.begin(), nums.end());
        int mnn = *min_element(nums.begin(), nums.end());
        if (mnn<0) {
            mnn = mnn*-1;
        }
        else { mnn = 0;}
        vector<int> hash(mxx+1+mnn, 0);
        for (int i = 0 ; i < n; i++) {
            hash[nums[i]+mnn]++;
        }
        int x = *max_element(hash.begin(), hash.end());
        for (int i= 0 ; i < mxx+1+mnn; i++) {
            if (hash[i] == x) {
                return i-mnn;
            }
        }

       
    }
};

// code 2 :

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int x : nums ) {
            mpp[x]++;
        }
        for (auto& i : mpp) {
            if (i.second > n/2) {
                return i.first;
            }
        }
        return -1 ; 
    }
};