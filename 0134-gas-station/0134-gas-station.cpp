class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int startpoint = 0 , currGas = 0;
        int totalGas = 0, totalCost = 0;

        for(int i=0; i<gas.size(); i++){

            totalGas += gas[i];
            totalCost += cost[i];

            currGas += (gas[i] - cost[i]);
            if(currGas < 0){
                startpoint = i+1;
                currGas = 0;
            }
        }
        return totalGas < totalCost ? -1 : startpoint;
    }
};