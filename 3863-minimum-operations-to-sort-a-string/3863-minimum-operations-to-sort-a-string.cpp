class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if(ranges::is_sorted(s)){
            return 0;
        }

        if(n == 2){
            return -1;
        }

        char mn = 'z' , mx = 'a';
        for(char val : s){
            mx = max(mx , val);
            mn = min(mn , val);
        }

        if(s[0] == mn || s[n-1] == mx){
            return 1;
        }

        for(int i=1; i<n-1; i++){
            if(s[i] == mn || s[i] == mx){
                return 2;
            }
        }

        if(s[0] == mx && s[n-1] == mn){
            return 3;
        }

        return 2;
    }
};