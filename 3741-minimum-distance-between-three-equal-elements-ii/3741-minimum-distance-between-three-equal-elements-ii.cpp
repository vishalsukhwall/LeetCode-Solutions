class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , vector<int>> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }

        int dis = INT_MAX;
        for(auto& [val , arr] : mp){
            if(arr.size() >= 3){
                for(int i=0; i+2<arr.size(); i++){
                    int len = 2 * (arr[i+2] - arr[i]);
                    dis = min(dis , len);
                }
            }
        }

        return dis == INT_MAX ? -1 : dis;
    }
};