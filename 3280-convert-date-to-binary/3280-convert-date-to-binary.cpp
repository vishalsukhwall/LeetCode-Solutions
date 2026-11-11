class Solution {
public:
    string tobinary(string s){
        int num = stoi(s);
        long long x = 1;
        long long nm = 0;

        while(num > 0){
            int dig = num % 2;

            nm += (dig * x);
            x = x * 10;

            num /= 2;
        }
        string ans = to_string(nm);

        return ans;
    }

    string convertDateToBinary(string date) {
        int n = date.size();

        string ans = "";
        string num = "";
        
        for(int i=0; i<n; i++){
            
            if(date[i] != '-'){
                num += date[i];
            }
            else{
                ans += tobinary(num);
                ans += '-';
                num = "";
            }
        }
            ans += tobinary(num);

        return ans;
    }
};