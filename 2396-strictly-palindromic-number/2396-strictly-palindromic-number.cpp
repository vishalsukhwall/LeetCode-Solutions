class Solution {
public:
    bool isStrictlyPalindromic(int numb) {
        for(int i=2; i<=numb-2; i++){
            int temp = numb;
            string s = "";

            while(temp > 0){
                int dig = temp % i;

                s += to_string(dig);

                temp = temp / i;
            }
            string rev = s;
            reverse(rev.begin() , rev.end());

            if(s != rev){
                return false;
            }
        }
        return true;
    }
};