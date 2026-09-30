class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> wind(26,0);
        vector<int> targ(26,0);
        vector<int> ans;

        if(s.size() < p.size()){
            return ans;
        }

        for(int i=0; i<p.size(); i++){
            wind[s[i] - 'a']++;
            targ[p[i] - 'a']++;
        }

        if(wind == targ){
            ans.push_back(0);
        }

        for(int i=p.size(); i<s.size(); i++){

            wind[s[i] - 'a']++;
            wind[s[i-p.size()] - 'a']--;

            if(wind == targ){
                ans.push_back(i-p.size()+1);
            }
        }
        
        return ans;
    }
};