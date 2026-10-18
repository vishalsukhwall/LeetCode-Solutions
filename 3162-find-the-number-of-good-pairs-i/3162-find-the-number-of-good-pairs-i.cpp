class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;

        for(int val : nums1){
            for(int value : nums2){
                if(val % (value * k) == 0) count++;
            }
        }
        return count;
    }
};