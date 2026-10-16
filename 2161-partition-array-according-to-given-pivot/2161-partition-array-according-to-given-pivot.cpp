class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> lpivot;
        vector<int> epivot;
        vector<int> rpivot;

        for(int i=0; i<n; i++){
            if(nums[i] < pivot){
                lpivot.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                epivot.push_back(nums[i]);
            }
            else{
                rpivot.push_back(nums[i]);
            }
        }
        
        vector<int> ans;
        for(int num : lpivot){
            ans.push_back(num);
        }

        for(int num : epivot){
            ans.push_back(num);
        }

        for(int num : rpivot){
            ans.push_back(num);
        }

        return ans;
    }
};