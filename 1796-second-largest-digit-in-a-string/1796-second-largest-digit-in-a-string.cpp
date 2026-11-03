class Solution {
public:
    int secondlarget(vector<int>& nums){
        int first = INT_MIN;
        int second = INT_MIN;

        for(int val : nums){
            if(first < val){
                second = first;
                first = val;
            }
            else if(second < val && val < first){
                second = val;
            }
        }

        return second == INT_MIN ? -1 : second;
    }
    int secondHighest(string s) {
        vector<int> nums;

        string st = "1234567890";
        int a = st.size();
        unordered_map<char , int> mp;
        for(int i=0; i<a; i++){
            mp[st[i] - '0']++;
        }

        for(char val : s){
            if(mp[val - '0'] != 0){
                nums.push_back(val - '0');
            }
        }

        return secondlarget(nums);
    }
};