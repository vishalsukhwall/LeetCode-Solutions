class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       int n = nums.size();
       if(k == n){
            return *max_element(nums.begin() , nums.end());
       }

       unordered_map<int , int> count;
       for(int num : nums){
            count[num]++;
       }
       int max_val = -1;
       
       if(k == 1){
            for(auto pair : count){
                if(pair.second == 1){
                    max_val = max(max_val , pair.first);
                }
            }
        return max_val;
       }

       if(count[nums[0]] == 1){
        max_val = max(nums[0] , max_val);
       }

       if(count[nums.back()] == 1){
        max_val = max(nums.back() , max_val);
       }
       return max_val;
    }
};