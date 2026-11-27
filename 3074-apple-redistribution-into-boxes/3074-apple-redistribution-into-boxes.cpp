class Solution {
public:
    int minimumBoxes(vector<int>& nums, vector<int>& cap) {
        int n = nums.size();
        int m = cap.size();
        int count = 0;

        sort(cap.begin() , cap.end());

        // int i = 0 , j = m-2;
        // int capacity = cap[m-1];
        // while(i < n && j >= 0){
        //     if(nums[i] <= capacity){
        //         capacity -= nums[i];
        //         i++;
        //     }
        //     else{
        //         count++;
        //         capacity += cap[j];
        //         capacity -= nums[i];
        //         i++ , j--;
        //     }
        // }

        int total = 0;
        for(int val : nums){
            total += val;
        }

        for(int i=m-1; i>=0; i--){
            if(total <= 0){
                break;
            }
            total -= cap[i];
            count++;
        }

        return count;
    }
};