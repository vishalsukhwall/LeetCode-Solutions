class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();

        stack<int> st;
        int current = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(0);
                current++;
            }
            else{
                if(!st.empty()){
                    st.pop();
                    current--;
                }
                else{
                    current++;
                }
            }
        }
        return current;
    }
};