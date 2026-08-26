class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return intersect(nums1 , nums2);
        }

        unordered_map<int , int> mp;
        for(int num : nums1){
            mp[num]++;
        }

        vector<int> ans;
        for(int num : nums2){
            if(mp[num] > 0){
                ans.push_back(num);
                mp[num]--;
            }
        }
    return ans;

        // vector<int> ans;
        
        // int n = nums1.size();
        // int m = nums2.size();

        // for(int i=0; i<n; i++){
        //     int j = 0;
        //     while(j < m){
        //        if(nums1[i] == nums2[j]){
        //             ans.push_back(nums1[i]);
        //             nums2[j] = -1;
        //             break;
        //         } 
        //         j++;
        //     }
        // }
        // return ans;
    }
};