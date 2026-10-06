class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();

        if(s.empty()){
            return 0;
        }

        int maxInt = INT_MAX;
        int minInt = INT_MIN;

        int i = 0;
        while(i < n && s[i] == ' '){
            i++;
        }

        bool neg = false;
        if(i < n && s[i] == '-'){
            neg = true;
            i++;
        }
        else if(i < n && s[i] == '+'){
            i++;
        }

        long long result = 0;
        while(i < n && s[i] >= '0' && s[i] <= '9'){
            int a = s[i] - '0';
            result = result * 10 + a;

            if(neg){
                if(-result < INT_MIN){
                    return INT_MIN;
                }
            }
            else{
                if(result > INT_MAX){
                    return INT_MAX;
                }
            }

            i++;
        }

        if(neg){
            return -result;
        }

        return result;
    }
};