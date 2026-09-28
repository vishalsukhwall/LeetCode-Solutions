class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        stack<int> st;

        int count = 0;
        int maxcount = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(s[i]);
                maxcount = max(maxcount , (int)st.size());
            }
            else if(s[i] == ')'){
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        return maxcount;
    }
};