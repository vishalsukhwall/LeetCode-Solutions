class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        
        if(n == 0){
            return "";
        }
        
        sort(s.begin() , s.end());
        string start = s[0] , last = s[n-1];
        string res = "";

        for(int i=0; i<n; i++){
            if(start[i] != last[i]){
                break;
            }
            res += start[i];
        }

        return res;
    }
};