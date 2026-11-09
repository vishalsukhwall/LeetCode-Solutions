class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n = s.size();

        int en;
        for(int i=0; i<n; i++){
            if(s[i] == ch){
                en = i+1;
                break;
            }
        }

        reverse(s.begin() , s.begin() + en);

        return s;
    }
};