class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int count = 0;

        for(int i=1; i<n; i+=2){
            if(s[i-1] != s[i]){
                count++;
            }
        }

        return count;
    }
};