class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string , vector<string>> mp;

        for(int i=0; i<str.size(); i++){
            string key = str[i];
            sort(key.begin() , key.end());
            mp[key].push_back(str[i]);
        }
        
        vector<vector<string>> result;
        auto j = mp.begin();
        while(j != mp.end()){
            result.push_back(j->second);
            j++;
        }


        return result;
    }
};