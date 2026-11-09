class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxlen = 0;

        for(string val : s){
            int count = 1;

            for(char value : val){
                if(value == ' '){
                    count++;
                }
            }

            maxlen = max(maxlen , count);
        }

        return maxlen;
    }
};