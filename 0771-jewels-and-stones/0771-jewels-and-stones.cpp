class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.size();
        unordered_map<char , int> mp;

        for(char val : jewels){
            mp[val]++;
        }

        int count = 0;

        for(int i=0; i<stones.size(); i++){
            if(mp[stones[i]] != 0){
                count++;
            }
        }

        return count;
    }
};