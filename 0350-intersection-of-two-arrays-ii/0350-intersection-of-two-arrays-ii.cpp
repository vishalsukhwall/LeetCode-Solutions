class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        int n = nums1.size();
        int m = nums2.size();

        for(int i=0; i<n; i++){
            int j = 0;
            while(j < m){
               if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                } 
                j++;
            }
        }
        return ans;
    }
};