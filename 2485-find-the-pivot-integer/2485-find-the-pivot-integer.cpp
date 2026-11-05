class Solution {
public:
    int pivotInteger(int n) {
        if(n <= 1){
            return n;
        }

        vector<int> nums(n , 0);

        for(int i=1; i<=n; i++){
            nums[i-1] = i;
        }

        vector<int> leftsum(n , 0);
        vector<int> rightsum(n , 0);

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];

            leftsum[i] = sum;
        }

        sum = 0;
        for(int i=n-1; i>=0; i--){
            sum += nums[i];

            rightsum[i] = sum;
        }

        for(int i=0; i<n; i++){
            if(leftsum[i] == rightsum[i]){
                return nums[i];
            }
        }

        return -1;
    }
};