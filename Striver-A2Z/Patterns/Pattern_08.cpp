// Downward Normal Triangle

class Solution {
public:
    void pattern8(int n) {
        int count = n*2;
        for (int i = 0 ; i < n ; i++) {
            // for spaces 
            for (int j = 0 ; j < i ; j++ ) {
                cout << " ";
            }
            // for star 
            for (int k= count-1 ; k > 0 ; k--) {
                cout << "*";
            }
            cout << endl;
            count = count - 2;
        }

    }
};