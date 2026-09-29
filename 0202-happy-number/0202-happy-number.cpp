class Solution {
public:
    bool isHappy(int n) {
        int ans = 0;

        if(n == 1 || n == 7){
            return true;
        }
        else if(n < 10) return false;
        else{
            while(n > 0){
                int rem = n % 10;

                ans += rem * rem;

                n = n / 10;
            }
        }
        return isHappy(ans);
    }
};