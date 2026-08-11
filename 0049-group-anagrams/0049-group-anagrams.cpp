class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<std::string, std::vector<std::string>> map;
        
        for (std::string s : strs) {
            std::string key = s;
            std::sort(key.begin(), key.end());
            map[key].push_back(s);
        }
        
        std::vector<std::vector<std::string>> result;
        for (auto pair : map) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};