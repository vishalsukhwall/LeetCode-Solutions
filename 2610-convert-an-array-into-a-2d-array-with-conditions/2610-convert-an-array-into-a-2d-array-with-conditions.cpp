class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        unordered_map<int , int> mp;

        for(int val : nums){
            mp[val]++;
        }

        int maxi = 0;
        for(auto& i : mp){
            maxi = max(maxi , i.second);
        }

        for(int i=0; i<maxi; i++){
            vector<int> arr;
            
            for(auto& val : mp){
                if(val.second > 0){
                    arr.push_back(val.first);
                    val.second--;
                }
            }
            ans.push_back(arr);
        }

        return ans;
    }
};