class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        int starting = 0 , currgas = 0;

        int totalgas = 0 , totalcost = 0;
        for(int i=0; i<n; i++){

            totalgas += gas[i];
            totalcost += cost[i];
            
            currgas += (gas[i] - cost[i]);

            if(currgas < 0){
                starting = i + 1;
                currgas = 0;
            }
        }

        return totalgas < totalcost ? -1 : starting;
    }
};