class Solution {
public:
    bool isHappy(int n) {
        int num = 0;
        
        if(n == 1 || n == 7) return true;
        else if (n < 10) return false;
        else{
            while(n > 0){
                int temp = n % 10;

                num += temp * temp;
                n = n / 10;
            }
        }
        
        return isHappy(num);
    }
};