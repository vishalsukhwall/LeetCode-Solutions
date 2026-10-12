class Solution {
public:
    vector<int> minOperations(string s) {
        int n = s.size();
        vector<int> ans(n , 0);

        if(n == 1){
            return ans;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(s[j] == '1'){
                    ans[i] += abs(i - j);
                }

            }
        }

        return ans;
    }
};