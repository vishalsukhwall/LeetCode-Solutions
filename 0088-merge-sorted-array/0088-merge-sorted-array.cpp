class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        vector<int> ans;

        int i=0 , j=0;
        while(i < n && j < m){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i < n){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j < m){
            ans.push_back(nums2[j]);
            j++;
        }

        nums1.clear();
        for(int val : ans){
            nums1.push_back(val);
        }
    }
};