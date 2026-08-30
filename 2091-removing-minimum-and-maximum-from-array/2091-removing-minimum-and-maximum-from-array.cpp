class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minidx = 0;
        int maxidx = 0;

        for(int i=0; i<n; i++){
            if(nums[i] > nums[maxidx]) maxidx = i;
            if(nums[i] < nums[minidx]) minidx = i;
        } 

        if(minidx > maxidx){
            swap(minidx , maxidx);
        }

        int opt1 = maxidx + 1;
        int opt2 = n - minidx;
        int opt3 = (minidx + 1) + (n - maxidx);

        return min({opt1 , opt2 , opt3});
    }
};