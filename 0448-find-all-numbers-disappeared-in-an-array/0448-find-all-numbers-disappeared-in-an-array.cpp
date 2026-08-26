class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> s(nums.begin() , nums.end());
        vector<int> ans;

        int i = 1;
        while(i <= n){
            if(s.count(i) == 0){
                ans.push_back(i);
            }
            i++;
        }
    return ans;
    }
};