class Solution {
public:
    int minimumBoxes(vector<int>& nums, vector<int>& cap) {
        int n = nums.size();
        int m = cap.size();
        int count = 0;

        sort(cap.begin() , cap.end() , greater<>());

        int i = 0 , j = 0;
        int capacity = 0;

        while(i < n && j < m){
            while(j < m && capacity < nums[i]){
                capacity += cap[j];
                j++;
                count++;
            }
            
            capacity -= nums[i];
            i++;
        }

        return count;
    }
};