// Upward + downWard triangle 

class Solution {
public:
    void pattern9(int n) {
        int count = 1;
        for (int i= n; i > 0 ; i--) {
            for (int j= 1 ; j < i ; j++) {
                cout << " ";
            }
            for (int k = 0 ; k < count ; k++){
                cout << "*";
            }
            cout << endl ;
            count = count + 2; 
        }
        int newcount = n*2;
        for (int i = 0 ; i < n; i++){
            for (int j = 0 ; j < i ; j++) {
                cout << " ";
            }
            for (int k = 0; k < newcount -1 ; k++ ) {
                cout << "*";
            }
            cout << endl ;
            newcount = newcount - 2;
        }
    }
};