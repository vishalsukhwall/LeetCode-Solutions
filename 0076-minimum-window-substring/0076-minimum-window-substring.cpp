class Solution {
public:
    bool isvalid(vector<int> &arr1 , vector<int> &arr2){
        for(int i=0; i<128; i++){
            if(arr2[i] < arr1[i]) return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        int n = s.size();

        if(n < t.size()){
            return "";
        }

        vector<int> arr1(128 , 0);
        for(int i=0; i<t.size(); i++){
            arr1[t[i]]++;
        }

        vector<int> arr2(128 , 0);
        string ans = "";
        int minlen = INT_MAX , start = -1;
        int l = 0;

        for(int r=0; r<n; r++){
            arr2[s[r]]++;

            while(l <= r && isvalid(arr1 , arr2)){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    start = l;
                }
                arr2[s[l]]--;
                l++;
            }
        }

        if(start == -1) return "";
    
        ans = s.substr(start , minlen);

        return ans;
    }
};