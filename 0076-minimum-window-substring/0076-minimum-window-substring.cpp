class Solution {
public:
    bool isvalid(vector<int> &sarr , vector<int> &tarr){
        for(int i=0; i<128; i++){
            if(sarr[i] < tarr[i]) return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        int n = s.size();

        if(n < t.size()){
            return "";
        }

        vector<int> tarr(128 , 0);
        for(int i=0; i<t.size(); i++){
            tarr[t[i]]++;
        }

        vector<int> sarr(128 , 0);
        int l = 0 , start = -1;
        int minlen = INT_MAX;

        for(int r=0; r<n; r++){
            sarr[s[r]]++;

            while(l <= r && isvalid(sarr , tarr)){
                if(r - l + 1 < minlen){
                    minlen = r - l + 1;
                    start = l;
                }
                sarr[s[l]]--;
                l++;
            }
        }

        if(start == -1) return "";

        return s.substr(start , minlen);
    }
};