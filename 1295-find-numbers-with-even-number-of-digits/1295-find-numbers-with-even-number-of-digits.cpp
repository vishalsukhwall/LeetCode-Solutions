class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n; i++){
            string s = "";
            int num = nums[i];

            while(num > 0){
                int dig = num % 10;
                s += to_string(dig);

                num = num / 10;
            }

            if(s.size() % 2 == 0){
                count++;
            }
        }

        return count;
    }
};