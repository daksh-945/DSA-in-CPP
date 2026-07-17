// aababc triangle 

class Solution {
public:
    void pattern14(int n) {
        char ch = 'A';
        for (int i = 0 ; i < n; i++) {
            ch = 'A';
            for (int j = 0 ; j<= i ; j++ ) {
                cout << ch;
                ch = ch + 1 ;
            }
            cout << "\n";
        }
    }
};