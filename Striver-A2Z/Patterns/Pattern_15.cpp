// Downwrd abcd triangle 

class Solution {
public:
    void pattern15(int n) {
        char ch = 'A';
        for (int i = n ; i > 0 ; i--) {
            for (int j = 0 ; j < i ; j++) {
                cout << ch;
                ch = ch + 1;
            }
            cout << "\n";
            ch = 'A';
        }
    }
};