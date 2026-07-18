// Problem_01 : Highest Occuring Element in Array ;
// type: Easy

class Solution {
public:
    int mostFrequentElement(vector<int>& a) {
        int n = a.size();
        int x = *max_element(a.begin(),a.end()) + 1;
        int hash[x ] = {0};
        for (int i = 0 ; i < n ; i++) {
            hash[a[i]]++;
        }
        int max = *max_element(hash, hash+x);
        // return hash[max];
        for (int i= 0 ; i < x+1 ; i++ ){
            if ( hash[i] == max ){
                return (i);
            }
        }
    }
};