class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int n = area;
        int len = 0 , wid = 0;
        int minar = INT_MAX;

        for(int i=1; i<=n; i++){
            len = i;
            for(int j=1; j<=n/i; j++){
                wid = j;

                int targ = len * wid;

                if(targ == area){
                    if(minar > abs(len - wid)){
                        ans.clear();

                        ans.push_back(len);
                        ans.push_back(wid);
                        minar = abs(len - wid);
                    
                    }
                }
            }
        }

        if(ans[0] < ans[1]){
            swap(ans[0] , ans[1]);
        }

        return ans;
    }
};