class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        unordered_set<int> s;

        int minnum = INT_MAX;
        int maxnum = INT_MIN;

        for(int value : nums){
            minnum = min(minnum , value);
            maxnum = max(maxnum , value);
            s.insert(value);
        }

        for(int i = minnum+1; i < maxnum; i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }    
        return ans;
    }
};