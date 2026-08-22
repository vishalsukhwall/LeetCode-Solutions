class Solution {
public:
    bool checkDivisibility(int n) {
        int number = n;
        int add = 0;
        int multi = 1;

        while(n > 0){
            add += n % 10;
            multi *= n % 10;

            n = n / 10;
        }
        int sum = add + multi;
        
        if(number % sum != 0){
            return false;
        }
        else{
            return true;
        }
    }
};