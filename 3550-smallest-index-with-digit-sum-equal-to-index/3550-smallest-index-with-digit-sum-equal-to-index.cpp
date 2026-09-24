class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int temp = 0;

            while(num > 0){
                temp += num % 10;

                num = num / 10;
            }

            if(temp == i){
                ans = temp;
                return ans; 
            }
        }
        return -1;
    }
};