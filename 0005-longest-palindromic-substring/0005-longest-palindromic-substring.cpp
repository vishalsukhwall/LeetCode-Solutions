class Solution {
public:
    bool solve(string &s , int i , int j){
        if(i >= j){
            return true;
        }

        if(s[i] == s[j]){
            return solve(s , i+1 , j-1);
        }
        else{
            return false;
        }
    }
    string longestPalindrome(string s) {
       int n = s.size();

        int maxLen = INT_MIN;
        int stpoint = 0;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(solve(s , i , j)){
                    if(j-i+1 > maxLen){
                        maxLen = max(j-i+1 , maxLen);
                        stpoint = i;
                    }
                }
            }
        }
    return s.substr(stpoint , maxLen);
    }
};