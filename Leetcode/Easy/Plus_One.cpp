// Leetcode_66 : Plus one to each diogit of array ;


class Solution {
public:
// vector <int> New_arr(vector<int> arr, int n){
//     arr[n] = 0;
//     for (int i = n ; i < )
// }
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        // for single digits 
        if ( n == 1) {
            if (arr[n-1] != 9) {
                arr[n-1]++;
            }
            else {
                arr.clear();
                arr = {1,0};
            }
        }
        else{
        if (arr[n-1] == 9) {
            arr[n-1] = 0;
            for (int i = n-2; i >= 0 ; i--) {
                if (i == 0 && arr[i] == 9) {
                    arr[i] = 0;
                    arr.insert(arr.begin(),1);
                    continue;
                }
                if(arr[i] == 9) {
                    // New_arr(arr , i);
                    arr[i] = 0;
                }
                else {
                    arr[i]++;
                    break;
                }
            }
        }
        else {
            arr[n-1]++;
        }
        }
        return arr;
    }
};