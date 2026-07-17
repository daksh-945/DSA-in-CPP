// Actual Triangle 

class Solution {
public:
    void pattern7(int n) {
        int count = 1;
        for (int i= n ; i > 0 ; i--) {
            for (int j = 0 ; j < i-1 ; j++ ) {
                cout << " ";
            }
            for (int k = 0 ; k < count ; k++ ){
                cout << "*";
             }
             cout << endl;
            count = count + 2;
        }
    }
};