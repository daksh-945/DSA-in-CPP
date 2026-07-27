// Problem : longest consecutive sequence in an array of numbers 
// type : medium

// Code :
// lc 128 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        map<int , int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        int count = 1, mxx = 0;
        auto prev = mpp.begin()->first;
        for (auto i = next(mpp.begin()) ;  i != mpp.end(); i++){
            if (prev+1 == i->first) {
                count++;
                prev = i->first;
                continue;
            }
            else {
                mxx = max(mxx,count);
                count = 1;
                prev = i->first;
            }
        }
        mxx = max(count , mxx);
        return mxx;
       
    }
};