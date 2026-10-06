class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        int close = 0;
        stack<char> st;

        for(char ch : s){
            if(ch == '['){

                st.push(ch);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    close++;
                }
            }
        }

        return (close + 1) / 2;
    }
};