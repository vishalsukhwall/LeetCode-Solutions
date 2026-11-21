class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        unordered_map<int , int> mp;

        for(int val : nums){
            bool balance = false;

            if(val == 5){
                mp[val]++;
                balance = true;
            }


            if(!balance){
                int a = val - 5;

                if(a == 5){
                    if(mp[5] > 0){
                        mp[5]--;
                        mp[10]++;
                        balance = true;
                    }
                    else{
                        return false;
                    }
                }

                if(a == 15){
                    if(mp[10] > 0 && mp[5] > 0){
                        mp[10]--;
                        mp[5]--;
                        mp[20]++;
                        balance = true;
                    }
                    else if(mp[5] >= 3){
                        mp[5] -= 3;
                        mp[20]++;
                        balance = true;
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        return true;
    }
};