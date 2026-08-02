class Solution {
public:
    int t[501][501];
    int solve(int i , int j , vector<int>& nums){
        int n = nums.size();

        if(i > j){
            return 0;
        }

        if(t[i][j] != -1){
            return t[i][j];
        }

        int take_1 = nums[i] + min(solve(i+2 , j , nums) , solve(i+1 , j-1 , nums));
        int take_2 = nums[j] + min(solve(i+1 , j-1 , nums) , solve(i , j-2 , nums));

        return t[i][j] = max(take_1 , take_2);
    }

    bool stoneGame(vector<int>& piles) {
        int n = piles.size();

        memset(t , -1 , sizeof(t));

        int sum = accumulate(begin(piles) , end(piles) , 0);

        int alex = solve(0 , n-1 , piles);
        int bob = sum - alex;

        return alex > bob;
    }
};