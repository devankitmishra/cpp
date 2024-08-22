class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        ios::sync_with_stdio(0);
        int total_gas = 0, total_cost = 0;
        int current_tank = 0, starting_station = 0;
        
        for (int i = 0; i < gas.size(); i++) {
            total_gas += gas[i];
            total_cost += cost[i];
            current_tank += gas[i] - cost[i];
            
            // If current_tank is negative, reset starting station
            if (current_tank < 0) {
                starting_station = i + 1;
                current_tank = 0;
            }
        }
        
        // If total gas is less than total cost, return -1
        return (total_gas >= total_cost) ? starting_station : -1;
    }
};