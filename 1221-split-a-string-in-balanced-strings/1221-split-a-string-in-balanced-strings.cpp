class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int count = 0 , ans = 0;

        for(char val : s){
            if(val == 'R'){
                count -= 1;
            }
            else{
                count += 1;
            }

            if(count == 0){
                ans++;
            }
        }

        return ans;
    }
};