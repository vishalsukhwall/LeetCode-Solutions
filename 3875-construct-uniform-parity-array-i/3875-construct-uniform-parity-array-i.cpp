class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> nums2(n);

        int minNum = INT_MAX;
        for(int x : nums1){
            if(x % 2 == 1 && x < minNum){
                minNum = x;
            }
        }

        for(int i=0; i<n; i++){
            if(nums1[i] % 2 != 0){
                nums2[i] = nums1[i];
            }
            else{
                if(minNum == INT_MAX){
                    nums2[i] = nums1[i];
                }
                else{
                    nums2[i] = nums1[i] - minNum;
                } 
            }
        }
        return true;
    }
};