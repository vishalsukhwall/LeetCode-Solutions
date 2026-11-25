class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , vector<int>> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }

        int mindis = INT_MAX;
        for(auto& [val , arr] : mp){
            if(arr.size() >= 3){
                for(int i=0; i+2<arr.size(); i++){
                    int dis = 2 * (arr[i+2] - arr[i]);
                    mindis = min(mindis , dis);
                }
            }
        }

        return mindis == INT_MAX ? -1 : mindis;
    }
};