class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        
        vector<int> freq(100001 , 0);
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
            freq[target[i]]--;
        }

        for(int val : freq){
            if(val != 0){
                return 0;
            }
        }

        int maxIdx = 0;
        while(maxIdx < n && nums[maxIdx] == target[maxIdx]){
            maxIdx++;
        }
        maxIdx = min(n-1 , maxIdx);

        int minIdx = n-1;
        while(minIdx > 0 && target[minIdx-1] >= target[minIdx]){
            minIdx--;
        }

        int bond = maxIdx - minIdx + 1;

        return max(0 , bond);
    }
};