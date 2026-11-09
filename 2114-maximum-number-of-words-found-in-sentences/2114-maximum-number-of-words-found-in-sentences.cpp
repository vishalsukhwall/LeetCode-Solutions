class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxlen = 0;

        for(auto &val : s){
            int count = 1;

            for(auto &value : val){
                if(value == ' '){
                    count++;
                }
            }

            maxlen = max(maxlen , count);
        }

        return maxlen;
    }
};