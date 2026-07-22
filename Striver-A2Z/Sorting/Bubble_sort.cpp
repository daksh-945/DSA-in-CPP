// Bubble sort :
// code :

class Solution {
public:
    vector<int> bubbleSort(vector<int>& a) {
        int n = a.size();
        for (int i = 0 ; i < n ; i++) {
            int temp = 0; 
            int did_swap = 0;
            for (int j = 0 ;j < n-i-1 ; j++) {
                if (a[j] > a[j+1]) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    did_swap = 1;
                }
            }
            if (did_swap == 0 ) {
                break;
            }
        }
        return a;
     }
};
