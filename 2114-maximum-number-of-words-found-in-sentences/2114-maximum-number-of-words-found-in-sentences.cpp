class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n = s.size();

        int maxlen =INT_MIN;
        for(int i=0; i<n; i++){
            int count = 1;

            for(int j=0; j<s[i].size(); j++){
                if(s[i][j] == ' '){
                    count++;
                }
            }

            maxlen = max(maxlen , count);

            
        }

        return maxlen;
    }
};