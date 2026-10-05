class Solution {
public:
    int scoreOfParentheses(string s) {
        stack <int> st;
        int n = s.size();
        st.push(0);

        for(int i=0; i<n; i++){
            if(s[i] == '('){
               st.push(0); 
            }
            else{
                int current = st.top();
                st.pop();
                st.top() += max(1 , 2*current);
            }
        }
        
        return st.top();
    }
};