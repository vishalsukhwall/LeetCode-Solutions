class Solution {
public:
    int solve(int i , int j , vector<int>& nums){

        if(i > j){
            return 0;
        }

        if(i == j)
            return nums[i];
        }

        int take_1 = nums[i] + min(solve(i+2 , j , nums) , solve(i+1 , j-1 , nums));
        int take_2 = nums[j] + min(solve(i , j-2 , nums) , solve(i+1 , j-1 , nums));
        
        return max(take_1 , take_2);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        int total_sum = accumulate(begin(nums) , end(nums) , 0);

        int player1 = solve(0 , n-1 , nums);
        int player2 = total_sum - player1;

        return player1 >= player2;
    }
};