class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& arr) {
        int n = nums.size();
        vector<vector<int>> ans;
        int i = 0;

        while(i < n && nums[i][1] < arr[0]){
            ans.push_back(nums[i]);
            i++;
        }

        while(i < n && nums[i][0] <= arr[1]){
            arr[0] = min(arr[0] , nums[i][0]);
            arr[1] = max(arr[1] , nums[i][1]);
            i++;
        }
        ans.push_back(arr);

        while(i < n){
            ans.push_back(nums[i]);
            i++;
        }
        
        return ans;
    }
};