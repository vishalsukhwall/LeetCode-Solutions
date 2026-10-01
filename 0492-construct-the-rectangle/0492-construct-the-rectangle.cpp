class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int wid = sqrt(area);

        while(area % wid != 0){
            wid--;
        }

        int len = area / wid;

        ans.push_back(len);
        ans.push_back(wid);
        
        return ans;
    }
};