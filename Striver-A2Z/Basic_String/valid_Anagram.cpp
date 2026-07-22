// problem_07: check is t string have all the charcters of s or not 
// type: easy 

// code : 

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			//your code goes here
            int n1 = s.size();
            int n2 = t.size();
            int count = 0;
            if (n1 != n2)  {
                return false;
            }
            vector<int> hash(150,0);
            for (int i =0 ;i < n2 ; i++) {
                hash[t[i]]++;
            }
            // int k =0;
            for (int i=0 ; i < n1; i++) {
                // if (k == n1-1) {
                //     break;
                // }
                char ch = s[i];
                if (hash[ch] > 0) {
                    hash[ch]--;
                    // k++;
                    continue;
                } 
                // k++;
                else {
                    return false;
                }

            }
            return true;
		}
};