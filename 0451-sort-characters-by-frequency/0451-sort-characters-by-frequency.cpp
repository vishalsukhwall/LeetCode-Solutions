class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        vector<pair<int , char>> frq(128 , {0 , 0});

        for(int i=0; i<n; i++){
            frq[s[i]].first++;
            frq[s[i]].second = s[i];
        }

        sort(frq.rbegin() , frq.rend());
        string ans;
        ans.reserve(n);
        for(auto it : frq){
            if(it.first == 0) break;

            ans.append(it.first , it.second);
        }

        return ans;
    }
};