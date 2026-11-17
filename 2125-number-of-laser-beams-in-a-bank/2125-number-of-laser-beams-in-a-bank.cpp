class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int m = bank[0].size();
        int prev = 0 , ans = 0;

        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<m; j++){
                if(bank[i][j] == '1'){
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