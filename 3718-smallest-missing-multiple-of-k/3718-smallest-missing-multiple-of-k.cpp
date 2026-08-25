class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s(nums.begin() , nums.end());

        for(int i=1; ; ++i){
            int x = i * k;
            if(s.count(x) == 0){
                return x;
            } 
        }
    }
};