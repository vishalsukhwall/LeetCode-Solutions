class Solution {
public:
    vector<int> minOperations(string s) {
        int n = s.size();
        vector<int> ans(n , 0);

        int balls = 0 , move = 0;
        for(int i=0; i<n; i++){
            ans[i] += move;
            balls += s[i] - '0';
            move += balls;
        }

        balls = 0 , move = 0;
        for(int i=n-1; i>=0; i--){
            ans[i] += move;
            balls += s[i] - '0';
            move += balls;
        }

        return ans;
    }
};