class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();

        int i = 0;
        while(i < n && s[i] == ' '){
            i++;
        }

        bool sign = false;
        if(i < n && s[i] == '-'){
            sign = true;
            i++;
        }
        else if(i < n && s[i] == '+'){
            i++;
        }

        long long res = 0;
        while(i < n && s[i] >= '0' && s[i] <= '9'){
            int a = s[i] - '0';
            res = res * 10 + a;

            if(sign){
                if(-res < INT_MIN){
                    return INT_MIN;
                }
            }
            else {
                if(res > INT_MAX){
                    return INT_MAX;
                }
            }
            i++;
        }

        if(sign){
            return -res;
        }

        return res;
    }
};