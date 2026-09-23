class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        int k = 0;
        for(int i=0; i<n; i++){
            if(k == 0 || k == 1 || nums[i] != nums[k-2]){
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};