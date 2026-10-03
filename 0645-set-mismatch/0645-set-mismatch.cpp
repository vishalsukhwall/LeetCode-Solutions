class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;
        int missing = 0 , dupl = 0;

        for(int val : nums){
            mp[val]++;
        }

        for(int i=1; i<=n; i++){
            if(mp[i] == 0){
                missing = i;
            }

            if(mp[i] == 2){
                dupl = i;
            }
        }
        return {dupl , missing};
    }
};