class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& temp, vector<int>& l, vector<int>& r) {

        int n = l.size();
        vector<bool> ans(n , true);
        int j = 0;
        while(j < n){
            int st = l[j] , end = r[j];
            vector<int> nums = temp;

            sort(nums.begin() + st , nums.begin() + end + 1);

            int diff = nums[st+1] - nums[st];
            for(int i=st+1; i<=end; i++){
                

                if(nums[i] - nums[i-1] != diff){
                    ans[j] = false;
                }
            }
            j++;
        }

        return ans;
    }
};