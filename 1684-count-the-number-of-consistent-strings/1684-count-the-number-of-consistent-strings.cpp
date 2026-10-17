class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> allowedchar(26 , false);
        int count = 0;

        for(char val : allowed){
            allowedchar[val - 'a'] = true;
        }

        for(string word : words){
            bool valid = true;

            for(char ch : word){
                if(!allowedchar[ch - 'a']){
                    valid = false;
                    break;
                }
            }

            if(valid){
                count++;
            }
        }

        return count;
    }
};