// Problem_02: Count Of Odd Number of array;
// Type : easy


class Solution{
public:
    int countOdd(int arr[], int n){
        int x = 0;
          int odd_arr[x];
          for (int i=0 ; i < n; i++) {
            if(arr[i] % 2 != 0) {
                x++;
                odd_arr[i] = arr[i];
            } 
          }
         return x ;
    }
};
