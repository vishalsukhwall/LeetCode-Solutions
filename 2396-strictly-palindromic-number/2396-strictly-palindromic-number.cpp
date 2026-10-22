class Solution {
public:
    bool isStrictlyPalindromic(int numb) {
        string num = "";

        for(int i=2; i<=numb-2; i++){
            int n = numb;
            while(n > 0){
                int dig = n % i;

                num += to_string(dig);

                n = n / i;
            }

            string s = num;
            reverse(s.begin() , s.end());

            if(s != num){
                return false;
            }
        }
        return true;
    }
};