// Problem_03: Reverse an array 
// type : easy 

class Solution{
public:
    void reverse(int arr[], int n){
        int reverse_array[n];
        int k = 0;
        for (int i = n-1 ; i >= 0 ; i--) {
            reverse_array[k] = arr[i];
            k++;
        }
        for (int i = 0 ; i < n; i++) {
           arr[i] = reverse_array[i];
        }
    }
};
