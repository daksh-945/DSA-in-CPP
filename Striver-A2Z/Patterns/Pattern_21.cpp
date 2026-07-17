// hollow rectangle Triangle 

class Solution {
public:
    void pattern21(int n) {
        for (int i= 0 ; i < n; i++) {
            if (i == 0 || i == n-1) {
                for (int j = 0 ; j < n ;j++) {
                    cout << "*";
                }
                cout << "\n";
            }
            else {
                for (int k = 0 ; k < n ; k++) {
                    if (k == 0 || k == n-1) {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                    cout << "\n";
            }
           
        }
    }
};