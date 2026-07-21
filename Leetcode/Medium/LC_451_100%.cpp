// Problem_451 : Sort Character by Frequency;
// Example : Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
// beats: 100%

// code : 

class Solution {
public:
    int max(vector<int> hash) {
        int mx = *max_element(hash.begin(), hash.end());
        // for (int i =20 ; i < 150 ; i++) {
        //     if (mx < hash[i] && hash[i] != 0) {
        //         mx = hash[i];
        //     }
        // }
        for (int i= 20 ; i < 150 ; i++) {
            if (mx == hash[i]){
                // hash[i] = 0;
                return i;
            }
        }
        return 0;
    }
    int unquie(vector<int> hash) {
        int count = 0;
        for (int i =20 ; i < 150; i++) {
            if ( hash[i] > 0 ){
                count++;
                hash[i] = 0;
            }
        }
        return count;
    }
    string answer(int n , vector<int> hash,  int uni) {
        string ans;
        int mx;
        for (int i= 0; i < uni; i++) {
            mx = max(hash);
            // ans.push_back(i);
            while (hash[mx] > 0) {
                ans.push_back(mx);
                hash[mx]--;
            }
        }
        return ans;
    }
    string frequencySort(string s) {
        int n = s.size();
        vector<int> hash(150,0);

        for (int i =0 ; i < n; i++) {
            hash[s[i]]++;
        }
        // int mx = max(hash);
        int uni = unquie(hash);
        return answer(n , hash , uni );
    }
};