class Solution {
public:
    static bool custcompare(string a , string b){
        return (a+b) > (b+a);
    }

    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        string s = "";

        vector<string> num;
        for(int val : nums){
            num.push_back(to_string(val));
        }

        sort(num.begin() , num.end() , custcompare);

        if(num[0] == "0"){
            return "0";
        }

        for(int i=0; i<n; i++){
            s += (num[i]);
        }

        return s;
    }
};