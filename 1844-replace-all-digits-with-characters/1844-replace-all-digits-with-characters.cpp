class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();

        for(int i=1; i<n; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                continue;
            }
            else{
                int num = s[i] - '0';
                char last = s[i-1];

                s[i] = last + num;
            }
        }

        return s;
    }
};