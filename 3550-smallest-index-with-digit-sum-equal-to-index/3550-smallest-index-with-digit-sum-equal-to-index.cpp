class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int temp = 0;

            while(num > 0){
                temp += num % 10;

                num = num / 10;
            }

            if(temp == i){
                ans.push_back(i);
            }
        }
        if(ans.empty()){
            return -1;
        }
        else{
            return ans[0];
        }
    }
};