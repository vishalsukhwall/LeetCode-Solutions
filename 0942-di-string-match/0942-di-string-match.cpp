class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int l = 0 , h = n;
        vector<int> ans(n+1 , 0);

        for(int i=0; i<n; i++){
            if(s[i] == 'I'){
                ans[i] = l++;
            }
            else{
                ans[i] = h--;
            }
        }
        ans[n] = h;

        return ans;
    }
};