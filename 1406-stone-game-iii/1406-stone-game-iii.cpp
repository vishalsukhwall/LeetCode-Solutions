class Solution {
public:
    int solver(int i, int n, vector<int>& stoneValue , vector<int>& dp) {
        if(i >= n){
            return 0;
        }

        if(dp[i] != -1){
            return dp[i];
        }

        int ans = INT_MIN;
        int currSum = 0;

        for(int k=0; k<3 && i+k < n; k++){
            currSum += stoneValue[i+k];

            ans = max(ans , currSum - solver(i + k + 1, n , stoneValue , dp));
        }
        return dp[i] = ans;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();

        vector<int> dp(n , -1);

        int ans = solver(0 , n , stoneValue , dp);
        
        if(ans > 0){
            return "Alice";
        }
        else if(ans < 0){
            return "Bob";
        }
        else{
            return "Tie";
        }
    }
};