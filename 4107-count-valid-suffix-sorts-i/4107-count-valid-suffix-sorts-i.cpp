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

        int maxlen = 0 , i = 0;
        while(i < n && nums[i] == target[i]){
                i++;
            }
        maxlen = i;
        maxlen = min(n-1 , maxlen);

        int minlen = 0;
        i = n-1;
        while(i > 0 && target[i-1] >= target[i]){
            i--;
        }
        minlen = i;

        int bond = (maxlen - minlen + 1);

        return max(0 , bond);
    }
};