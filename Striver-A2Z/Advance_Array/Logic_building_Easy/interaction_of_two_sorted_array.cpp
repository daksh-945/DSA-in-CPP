// problem: interaction of two sorted array 
// type : easy /

code :

// l.c = 350

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {

        // approch 1 : too lengthy still have to deal with negatives 

        int n1 = nums1.size();
        int n2 = nums2.size();
        // int mxx1 = *max_element(nums1.begin(), nums1.end());
        // int mxx2 = *max_element(nums2.begin(), nums2.end());
        // // int mnn = *min_elemnt(num)
        // int mxx = max(mxx1, mxx2);
        // vector<int> hash1(mxx, 0) , hash2(mxx , 0);
        // vector<int> hash(mxx , 0);
        // for (int i= 0 ; i < n1; i++) {
        //     hash1[nums1[i]]++;
        //     // hash[nums2[i]]
        // }
        // for (int i= 0;i < n2; i++) {
        //     hash2[nums2[i]]++;
        // }
        // for (int i= 0; i < mxx ; i++) {
        //     if (hash1[i] > 0 && hash2[i] > 0) {
        //         hash[i]++;
        //         hash1[i]--;
        //         hash2[i]--;
        //         if (hash1[i] > 0 && hash2[i] > 0) {
        //             i--;
        //         }
        //     }
        // }
        vector<int> vec;
        // for (int i = 0 ; i < mxx; i++) {
        //     if (hash[i] > 0) {
        //         vec.push_back(i);
        //         hash[i]--;
        //         if (hash[i] == 0) {
        //             continue;
        //         }
        //         i--;
        //     }
        // }
        // return vec;
        for (int i= 0 ;i < n1 ; i++) {
            for (int j= 0 ; j < n2; j++) {
                if (nums1[i] == nums2[j]) {
                    vec.push_back(nums1[i]);
                    nums2.erase(nums2.begin() + j, nums2.begin() + j+1);
                    // because of erase T.C = N^3 ;;;
                    // visted vector approch use kar sakta hun ess Q ke liye 
                    // visted[n2]
                    n2--;
                    break;
                }
            }
        }
        return vec;
        
    }
};