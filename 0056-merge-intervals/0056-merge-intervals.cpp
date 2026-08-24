class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
       int n = nums.size();
       vector<vector<int>> ans;

       sort(nums.begin() , nums.end());

       for(int i=0; i<n; i++){
            int start = nums[i][0];
            int end = nums[i][1];

            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }

            int j = i+1;
            while(j < n && nums[j][0] <= end){
                end = max(end , nums[j][1]);
                j++;
            }
            ans.push_back({start , end});
            i = j - 1;
       }
       return ans;
    }
};