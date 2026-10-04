class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin() , arr.end());

        vector<int> doublenums;
        doublenums.insert(doublenums.end() , arr.begin() , arr.end());
        doublenums.insert(doublenums.end() , arr.begin() , arr.end());
        int n = nums.size();

        for(int i=0; i<=n; i++){
            bool match = true;

            for(int j=0; j<n; j++){
                if(doublenums[i+j] != nums[j]){
                    match = false;
                    break;
                }
            }

            if(match) return true;
        }
        return false;
    }
};