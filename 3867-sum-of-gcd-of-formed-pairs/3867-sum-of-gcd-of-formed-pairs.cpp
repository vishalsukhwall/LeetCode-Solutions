class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxval = nums[0];

        vector<int> arr(n , 0);
        arr[0] = nums[0];

        for(int i=1; i<n; i++){
            maxval = max(maxval , nums[i]);
            arr[i] = gcd(maxval , nums[i]);
        }

        sort(arr.begin() , arr.end());

        long long sum = 0;
        int i = 0 , j = n-1;
        while(i < j){
            sum += gcd(arr[i] , arr[j]);
            i++ , j--;
        }

        return sum;
    }
};