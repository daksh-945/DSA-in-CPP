// Longest common prefix in an string such that after breaking does goes furthur
// type : easy/


class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here
            int n = str.size();
            long long min = INT_MAX;
            for (int i=0 ;i < n; i++) {
                if (min > str[i].size()) {
                    min = str[i].size();
                }
            }
            // string min = *min_element(str.begin(), str.end());
            // int real_min = min.size();
            int count = 1;
            string vec;
            char c;
            if (n == 1) {
                for (int i = 0; i < min ; i++) {
                    vec.push_back(str[0][i]);
                }
                return vec;
            }
            for (int i=0 ; i < min ; i++) {
                count = 0;
                for (int j = 0 ; j < n ; j++) {
                    if (str[0][i] == str[j][i]) {
                        count++;
                    }
                }
                c = str[0][i];
                if (count == n) {
                    vec.push_back(c);
                }
                else {
                    break;
                }
            }
            return vec;
		}
};

