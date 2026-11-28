class Solution {
public:
    int reverseNum(int n){

        int num = 0;
        while(n > 0){
            int dig = n % 10;
            num = num * 10 + dig;
            n = n / 10;
        }

        return num;
    }

    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin() , nums.end());

        for(int i=0; i<n; i++){
            int rev = reverseNum(nums[i]);
            
            if(s.find(rev) == s.end()){
                s.insert(rev);
            }
        }

       return s.size();
    }
};