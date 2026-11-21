class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
        int count = 0;
        int n = s.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i][0] == s[j][1] && s[i][1] == s[j][0]){
                    count++;
                }
            }
        }
        return count;
    }
};