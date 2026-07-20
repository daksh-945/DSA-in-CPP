// probelm_06 : check if the number is prime or not 
// type: easy

class Solution{	
	public:
        
        bool check(int num , int i , int n) {
            if (num <= 1 ) {
                return false;
            } 
            // if ( num == 2) {
            //     return true;
            // }
            // agar sqrt n tak koi number nhi hai toh uske agge according to paiur bhi nhi hoga ;
            // example 36 ;
            // 1*6 , 2*18 , 3*12 , 4*9 , 6*6 bass agar yaa tak nhi hai toh agge bhi nhi honge ;because agge enke pair hi atte 
            // 9*4 , 12*3 , 2*18 , 36*1;
            // eample 25, 
            // 1*25 , 5*5 , 25*1 ; only ;;;;
            if (i*i > n) {
                return true;
            }
            if (num % i == 0) {
                return false;
            }
             return check(num , i + 1 , n);
        }


		bool checkPrime(int num){
			//your code goes here
            return check(num , 2 , num);
		}
};