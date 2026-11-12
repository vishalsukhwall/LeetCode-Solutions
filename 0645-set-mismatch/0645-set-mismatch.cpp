class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;
        int idx = 0 , dupl = 0;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i=1; i<=n; i++){
            if(mp[i] == 0){
                idx = i;
            }

            if(mp[i] == 2){
                dupl = i;
            }
        }

        return {dupl , idx};        
    }
};