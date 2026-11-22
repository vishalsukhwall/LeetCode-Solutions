class Solution {
public:
    bool checkString(string s) {
        string st = s;
        sort(st.begin() , st.end());

        return s == st;
    }
};