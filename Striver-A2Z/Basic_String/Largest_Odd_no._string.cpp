// Problem_03 : find largest odd number in a string using substring 
// type : easy 


class Solution{	
public:		
    string largeOddNum(string& s){
        int n= s.size();
        int first = 0;
        string subs ;
        // if (s == "0") {
        //     return 0;
        // }
       for (int i= 0 ; i < n; i++){
            if (s[i] == '0' && first == 0) {
                continue;
            }
            else {
                subs.push_back(s[i]);
                first++;
            }
       }
       if (subs.size() == 0) {
        return "";
       }
    //    stoi for string to int i.e int num = stoi(s);
    for (int i=first-1 ; i>=0; i--) {
        if ((subs[i]-'0') %2 == 0) {
            subs.pop_back();
        } 
        else {
            return subs;
        }
    }
    return "";
    

    
    }
};