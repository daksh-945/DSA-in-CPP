// 101010 Tringle 

class Solution {
public:
    void pattern11(int n) {
        for (int i= 1 ; i <= n; i++) {
            if ( i % 2 == 0) {
                for ( int j = 0 ; j < i ; j++) {
                    if ( j %2 == 0 ) {
                        cout << "0 ";
                    }
                    else {
                        cout << "1 ";
                    }
                }
                cout << "\n";
            }
            else {
                for (int k =0 ;k < i ; k++) {
                    if (k % 2 == 0) {
                        cout << "1 ";
                    }
                    else {
                        cout << "0 ";
                    }
                }
                cout << "\n";
            }
        }
    }
};