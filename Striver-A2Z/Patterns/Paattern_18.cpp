// downward alphabet Triangle 


class Solution {
public:
    void pattern18(int n) {
        char ch = 'A' + n;
        for (int i = 0 ; i < n; i++) {
            ch = ch - (i+1);
            for (int j=0 ; j <= i ; j++) {
                cout << ch << " ";
                ch = ch +1;
            }
            cout << "\n";
        }

    }
};