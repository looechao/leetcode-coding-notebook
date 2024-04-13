class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0, tank = 0, start = 0;

        for (int i = 0; i < gas.size(); i++) {
            total_gas += gas[i];   // 所有站点的油量
            total_cost += cost[i]; // 所有站点的耗油量
            tank += gas[i] - cost[i]; // tank 存储的是剩余的油量

            if (tank < 0) { // 如果油量不够
                start = i + 1; // 选择下一个站点作为新的出发点
                tank = 0;      // 油箱置空
            }
        }

        // 如果总油量 >= 总消耗，那么一定可以找到一个起始点走完整个路程
        if (total_gas >= total_cost) return start;
        else return -1;
    }
};
