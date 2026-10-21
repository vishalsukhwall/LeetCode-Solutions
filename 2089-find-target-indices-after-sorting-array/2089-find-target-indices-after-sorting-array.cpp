class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<int> arr;

        int st = 0 , end = n-1;
        int first = -1;
        while(st <= end){
            int mid = st + (end - st) / 2;

            if(nums[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        if(first == -1){
            return arr;
        }

        st = 0 , end = n-1;
        int second = -1;
        while(st <= end){
            int mid = st + (end - st) / 2;

            if(nums[mid] == target){
                second = mid;
                st = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        for(int i = first; i <= second; i++){
            arr.push_back(i);
        }

        return arr;
    }
};