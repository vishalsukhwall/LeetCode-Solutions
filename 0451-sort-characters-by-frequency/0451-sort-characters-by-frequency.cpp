class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int , char>> frq(128 , {0 , 0});

        for(char val : s){
            frq[val].first++;
            frq[val].second = val;
        }

        sort(frq.rbegin() , frq.rend());
        string ans;
        ans.reserve(s.size());
        for(auto it : frq){
            if(it.first == 0) break;

            ans.append(it.first , it.second);
        }

        return ans;
    }
};