class Solution {
public:
    string revstring(string &s , int st , int end){

        while(st < end){
            swap(s[st] , s[end]);
            st++ , end--;
        }
        return s;
    }

    string reverseParentheses(string s) {
        int n = s.size();
        stack<int> st;
        string ans = "";

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(i);
            }

            if(s[i] == ')'){
                int idx = st.top();
                st.pop();

                revstring(s , idx+1 , i-1);
            }
        }

        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == ')'){
                continue;
            }

            ans += s[i];
        }
       
        return ans;
    }
};