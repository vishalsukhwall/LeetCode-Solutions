class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();

        if(n <= k){
            return s;
        }

        int count = 0 , a = 0;
        string num = "";

        for(int i=0; i<n; i++){
            a += s[i] - '0';
            count++;

            if(count == k){
                num += to_string(a);
                count = 0;
                a = 0;
            }
        }

        if(count > 0){
            num += to_string(a);
        }

        return digitSum(num , k);
    }
};