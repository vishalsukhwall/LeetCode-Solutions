class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        unordered_map<string , int>mp;

        for(int i=0; i<list1.size(); i++){
            mp[list1[i]] = i;
        }

        for(int j=0; j<list2.size(); j++){
            if(mp.find(list2[j]) != mp.end()){
                mp[list2[j]] = 1001 + j + mp[list2[j]];
            }
        }

        int x = INT_MAX;
        for(auto it : mp){
            if(it.second >= 1001){
                x = min(x , it.second);
            }
        }

        for(auto it : mp){
            if(it.second == x){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};