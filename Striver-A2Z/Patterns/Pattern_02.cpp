// Problem: slope triangle pattern 
// Source: Striver A2Z Sheet
// link: https://takeuforward.org/plus/dsa/problems/pattern-2?subject=dsa
// Difficulty: Easy

class Solution {
public:
    void pattern2(int n) {
        for (int i = 0 ; i < n; i++) {
            for (int j =0 ; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};