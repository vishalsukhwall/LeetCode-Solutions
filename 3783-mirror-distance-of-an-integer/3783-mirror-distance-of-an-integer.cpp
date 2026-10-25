class Solution {
public:
    int revnum(int n){
        int num = 0;

        while(n > 0){
            int dig = n % 10;

            num = (num * 10) + dig;

            n = n / 10;
        }

        return num;
    }

    int mirrorDistance(int n) {
        
        return abs(n - revnum(n));
    }
};