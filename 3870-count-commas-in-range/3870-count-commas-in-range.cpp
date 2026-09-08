class Solution {
public:
    int countCommas(int n) {
        long long comma = 0;

        if(n >= 1000){
            comma += (n - 999LL);
        }
        if(n >= 1000000){
            comma += (n - 9999LL);
        }
        if(n >= 1000000000){
            comma += (n - 99999LL);
        }

        return comma;
    }
};