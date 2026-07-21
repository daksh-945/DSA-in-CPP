// Problem_08 : Sort charcter in a string by there maximum frequency , if some charcter have same frequency then arrange them in alphabatical order;
// type : Easy 

// code : 

class Solution{	
	public:
        int max(vector<char>& hash) {
            int maxx = INT_MIN;
            for (int i = 20 ; i < 150; i++) {
                if ((maxx < hash[i]) && (hash[i] != 0)){
                    // if (maxx > 0) {
                        maxx = hash[i];
                        // hash[i] = 0;
                    // }
                }
            }
            return maxx;
        }
        int unquie(vector<char>& hash) {
            int freq = 0;
            for (int i= 20 ; i <150 ; i++) {
                if (hash[i] > 0) {
                    freq++;
                }
            }
            return freq;
        }
        char answer(vector<char>& hash , int maxx) {
            char vec;
            for (int i =20 ; i < 150 ; i++) {
                if (maxx == hash[i]) {
                    vec = i;
                    hash[i] = 0;
                    break;
                }
            } 
            return vec;
        }
		vector<char> frequencySort(string& s){
			//your code goes here
            int n = s.length();
            // int x = max_element(s.begin(),s.end()) + 1;
            // vector<char> new_s;
            vector<char> hash(150,0);
            for (int i=0 ; i < n; i++) {
                hash[s[i]]++;
            }
            // int maxx = max(hash);
            int x = unquie(hash);
            int i = 0;
            vector<char> vec;
            while (i < x) {
                int mx = max(hash);
                vec.push_back(answer(hash , mx));
                i++;

            }
            return vec;

		}
};