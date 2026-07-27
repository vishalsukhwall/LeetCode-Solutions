class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans;
        int i = 0 , j = 0;

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
        
        int sum = 0;
        for(int i=0; i<ans.size(); i++){
            sum += ans[i];
        }
        double mid = 0;

        if(ans.size() % 2 == 0){
            return mid = (ans[ans.size()/2-1]  + ans[ans.size()/2])/2.0;
        }
        else{
            int st = 0, end = ans.size()-1;
            int midd = st + (end - st)/2;
            mid = ans[midd];
            return mid;
        } 
    }
};