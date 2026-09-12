class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                continue;
            }
            for(int j=0; j<n; j++){
                
            //    if(i == j ){
            //     continue;
            //    }
               for(int k=0; k<n; k++){
                    if(i == j || j == k || i == k){
                        continue;
                    }

                    int num = (nums[i])*100 + (nums[j])*10 + (nums[k])*1;
                    
                   if(num % 2 == 0){
                    if(s.find(num) == s.end()){
                        count++;
                    }
                    s.insert(num);
                   }
               }
            }
        }
        return count;
    }
};