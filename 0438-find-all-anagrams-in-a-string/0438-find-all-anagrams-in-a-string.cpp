class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int> str(26 , 0);
        vector<int> ptr(26 , 0);
        vector<int> ans;

        if(n < k){
            return ans;
        }

        for(int i=0; i<k; i++){
            str[s[i] - 'a']++;
            ptr[p[i] - 'a']++;
        }

        if(str == ptr){
            ans.push_back(0);
        }

        for(int i=k; i<n; i++){

            str[s[i] - 'a']++;

            str[s[i-k] - 'a']--;

            if(str == ptr){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};