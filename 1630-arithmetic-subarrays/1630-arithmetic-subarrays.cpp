class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& temp, vector<int>& l, vector<int>& r) {
        int n = l.size() , i = 0;
        vector<bool> ans(n , true);

        while(i < n){
            int st = l[i] , end = r[i];
            vector<int> nums = temp;

            sort(nums.begin() + st , nums.begin() + end + 1);
            int diff = nums[st+1] - nums[st];

            for(int j=st+1; j<=end; j++){
                if(nums[j] - nums[j-1] != diff){
                    ans[i] = false;
                }
            }

            i++;
        }
        return ans;
    }
};