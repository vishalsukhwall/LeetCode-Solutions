class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prev = 0;

        for(string s : bank){
            int count = 0;
            
            for(char val : s){
                if(val == '1'){
                    count++;
                }
            }

            if(count != 0){
                ans += (prev * count);
                prev = count;
            }
        }

        return ans;
    }
};