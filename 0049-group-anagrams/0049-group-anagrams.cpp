class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> map;

        for(int i=0; i<strs.size(); i++){
            string key = strs[i];
            sort(key.begin() , key.end());
            map[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        
        auto it = map.begin();
        while(it != map.end()){
            result.push_back(move(it->second));
            it++;
        }
        return result;
    }
};