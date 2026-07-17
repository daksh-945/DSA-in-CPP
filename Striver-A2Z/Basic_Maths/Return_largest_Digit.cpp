// Problem_05 : Return The Largest Digit In the Number ;
// Type : easy 

class Solution {
public:
// yee bina vector ke bhi easily ho jaye gha but mene vector se karra 
    int largestDigit(int n) {
        vector<int> vec;
        while (n != 0) {
            int temp = n%10;
            vec.push_back(temp); 
            n = n/10;
            }
        auto max = 0;
        for (auto i = 0 ; i < vec.size(); i++){
            if (max < vec[i]){
                max = vec[i];
            }
        }
        return max;

    }
};