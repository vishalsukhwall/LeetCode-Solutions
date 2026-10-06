class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        stack<char> st;

        int unbalanced = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    unbalanced++;
                }
            }
        }
        return (unbalanced + 1)/2;
    }
};