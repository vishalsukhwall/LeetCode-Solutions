class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;

        for(int i=0; i<n; i++){
            int x = nums[i];
            int count = 0;
            int currSum = 0;

            for(int j=1; j*j<=x; j++){
                if(x % j == 0){
                    count++;
                    currSum += j;

                    int a = x/j;
                    if(a != j){
                        count++;
                        currSum += a;
                    }
                }

                if(count > 4) break;
            } // Loop yahan khatam hota hai

            // Check loop ke BAHAR hona chahiye
            if(count == 4){
                sum += currSum;
            }
        }
        return sum;
    }
};