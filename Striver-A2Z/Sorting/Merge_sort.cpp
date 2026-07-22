// Merge sort :
// Code :

class Solution {
public:
void merge(vector<int>& a , int low , int mid , int high) {
    int left = low;
    int right = mid+1;
    vector<int> temp ;
    while (left <= mid && right <= high) {
        if (a[left] <= a[right]) {
            temp.push_back(a[left]);
            left++;
        }
        else {
            temp.push_back(a[right]);
            right++;
        }
    }
        while ( left <= mid) {
            temp.push_back(a[left]);
            left++;
        }
        while(right <= high) {
            temp.push_back(a[right]);
            right++;
        }
        for (int i= low ; i <= high ; i++) {
            a[i] = temp[i-low];
        }
}
void mergesort(vector<int>& a , int low , int high) {
    if (low >= high ) {
        return ;
    }
    int mid = (low+high)/2;
    mergesort(a, low , mid);
    mergesort(a,mid+1,high);
    merge(a, low,mid , high);
}
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        mergesort(nums, low , high);
        return nums;
    }
};
