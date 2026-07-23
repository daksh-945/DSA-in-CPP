// Problem : find unioun of two sorted sorted array 
// type : easy /

// code :

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        // int mxx1 = *max_element(nums1.begin(), nums1.end())+1;
        // int mxx2 = *max_element(nums2.begin(), nums2.end())+1; 
        // int mxx = max(mxx1 , mxx2);

        // approch 1 : negative value and big value case fails 

        // vector<int> hash(mxx, 0);
        // for (int i= 0 ; i < n1 ; i++) {
        //     hash[nums1[i]]++;
        // }
        // for (int i= 0 ; i < n2 ; i++) {
        //     hash[nums2[i]]++;
        // }
        // nums1.clear();
        // for (int i= 0 ; i < mxx ; i++) {
        //     if (hash[i] > 0) {
        //         nums1.push_back(i);
        //     }
        // }
        // return nums1;

        set<int> s ;
        for (int i = 0 ; i < n1 ; i++) {
            s.insert(nums1[i]);
        }
        for (int i= 0; i < n2 ;i++) {
            s.insert(nums2[i]);
        }
        nums1.clear();
        // for (int i =0 ; i < n1+n2 ; i++ ) {
        //     nums1.push_back(s[i]);
        // }wrong 
        int i= 0;
        for (int x : s) {
            nums1.push_back(x);
            i++;
        }
        return nums1;

    }
};