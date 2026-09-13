class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        vector<char> ans(26 , 0);

        int count = 0;

        for(int i=0; i<n; i++){
            int idx = s[i] - 'a';

            if(ans[idx] == 0){
                ans[idx] = 1;
                count++;
            }
        }
        return count;
    }
};