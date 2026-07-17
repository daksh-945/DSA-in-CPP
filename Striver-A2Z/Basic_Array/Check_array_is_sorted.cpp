// Problem_04: Check if the array is sorted or not
// type : Easy;


class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        int count = 0;
        for (int i= 0 ; i < n; i++) {
            if (i == n-1) {
                continue;
            }
            if (arr[i] <= arr[i+1]) {
                continue;
            }
            else {
                count = 1;
                break;
            }
        }
        if (count == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};
