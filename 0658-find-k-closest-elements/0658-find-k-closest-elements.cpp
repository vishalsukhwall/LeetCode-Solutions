class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        deque<int> ans;

        for(int i=0; i<k; i++){
            ans.push_back(arr[i]);
        }

        for(int i=k; i<n; i++){
            if(abs(arr[i-k] - x) > abs(arr[i] - x)){
                ans.pop_front();
                ans.push_back(arr[i]);
            }
        }

        return vector<int>(ans.begin() , ans.end());
    }
};