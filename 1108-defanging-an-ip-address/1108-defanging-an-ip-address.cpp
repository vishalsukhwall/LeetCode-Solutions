class Solution {
public:
    string defangIPaddr(string s) {
        int n = s.size();

        string ans = "";

        for(int i=0; i<n; i++){
            if(s[i] == '.'){
                ans += '[';
                ans += s[i];
                ans += ']';
            }
            else{
                ans += s[i];
            }
        }

        return ans;
    }
};