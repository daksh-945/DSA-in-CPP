// Problem_03 : Sum of highest and lowest frequency 
// type easy 


class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        int n = nums.size();
        int x = *max_element(nums.begin(), nums.end()) + 1;
        vector<int> hash(x,0);
        for (int i= 0 ; i < n; i++) {
            hash[nums[i]]++;
        }
        int most = *max_element(hash.begin(), hash.end());
        // int least = *min_element(hash.begin(), hash.end());
        int least = 1000000;
        for (int i= 0 ; i <= x ;i++) {
            if ( least > hash[i] && hash[i] != 0){
                least = hash[i];
            }
        }
        int sum = 0;
        sum = most + least;
        // for (int i= 0 ; i <=x ; i++) {
        //     if (hash[i] == most) {
        //         sum = sum + i;
        //         most = -1;
        //     }
        //     if (hash[i] == least) {
        //         sum = sum + i;
        //         least = -1;
        //     }
        // }
        return sum;

    }
};
