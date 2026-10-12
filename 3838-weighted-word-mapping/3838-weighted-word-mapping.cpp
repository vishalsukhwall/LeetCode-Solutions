class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        vector<char> alpha = {
            'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 
            'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 
            'f', 'e', 'd', 'c', 'b', 'a'
        };

        string ans = "";

        for(int i=0; i<n; i++){
            string s = words[i];
            int sum = 0;

            for(int j=0; j<s.size(); j++){
                sum += weights[s[j] -'a'];
            }
            sum = sum % 26;
            
            ans += alpha[sum];
        }

        return ans;
    }
};