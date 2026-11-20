class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        int maxval = 0;
        for(auto& i : mp){
            maxval = max(maxval , i.second);
        }

        for(int i=0; i<maxval; i++){
            vector<int> temp;

            for(auto& val : mp){
                if(val.second > 0){
                    temp.push_back(val.first);
                    val.second--;
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};