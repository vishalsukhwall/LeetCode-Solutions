class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string , vector<string>>mp;

        for(string val : strs){
            string value = val;
            sort(value.begin(),value.end());
            mp[value].push_back(val);
        } 

        vector<vector<string>> ans;

        for(auto value : mp){
            ans.push_back(value.second);
        }
       return ans; 
    }
};