// Problem : find a row in a pascal triangle 
// type easy 

// code :

// 119
class Solution {
public:
    // ans = (row-col)/col.  observation 

    int value(int r , int c) {
        int x = 1;
        for (int i = 1 ; i <= c ; i++) {
            x = x*(r-i)/(i);
        }
        return x;
    }
    vector<int> pascalTriangleII(int r) {
         vector<int> vec;
        int x = 1;
        // int c = 0;
        for (int i = 1 ; i <= r ; i++) {
            if (i == 1 || i == r) {
                vec.push_back(1);
                continue;
            }
            // c++;
            int val = value(r, i-1);
            vec.push_back(val);
            continue;
        }
        return vec;
    }
};