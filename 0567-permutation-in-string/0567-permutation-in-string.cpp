class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> wind(26 , 0);
        vector<int> targ(26 , 0);

        if(s1.size() > s2.size()){
            return false;
        }

        for(int i=0; i<s1.size(); i++){
            wind[s2[i] - 'a']++;
            targ[s1[i] - 'a']++;
        }

        if(wind == targ){
            return true;
        }

        for(int i=s1.size(); i<s2.size(); i++){
            
            wind[s2[i] - 'a']++;
            wind[s2[i-s1.size()] - 'a']--;

            if(wind == targ){
                return true;
            }
        }
        
        return false;
    }
};