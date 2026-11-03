class Solution {
public:
    int secondHighest(string s) {
        int first = INT_MIN;
        int second = INT_MIN;
        int num;

        for(int i=0; i<s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                num = s[i] - '0';
                if(first < num){
                    second = first;
                    first = num;
                }
            else if(second < num && num < first){
                second = num;
                }
            }
        }

        return second == INT_MIN ? -1 : second;
    }
};