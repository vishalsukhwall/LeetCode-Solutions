class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int num1 = -1 , count_1 = 0;
        int num2 = -1 , count_2 = 0;
        vector<int> ans;

        for(int val : nums){
            if(num1 == val){
                count_1++;
            }
            else if(num2 == val){
                count_2++;
            }
            else if(count_1 <= 0){
                num1 = val;
                count_1 = 1;
            }
            else if(count_2 <= 0){
                num2 = val;
                count_2 = 1;
            }
            else{
                count_1-- , count_2--;
            }
        }

        count_1 = 0 , count_2 = 0;
        
        for(int val : nums){
            if(num1 == val){
                count_1++;
            } 
            else if(num2 == val){
                count_2++;
            }
        }

        if(count_1 > n/3){
            ans.push_back(num1);
        }

        if(count_2 > n/3 && num2 != num1){
            ans.push_back(num2);
        }

        return ans;
    }
};