class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0, tank = 0, start = 0;

        for (int i = 0; i < gas.size(); i++) {
            total_gas += gas[i];   // ����վ�������
            total_cost += cost[i]; // ����վ��ĺ�����
            tank += gas[i] - cost[i]; // tank �洢����ʣ�������

            if (tank < 0) { // �����������
                start = i + 1; // ѡ����һ��վ����Ϊ�µĳ�����
                tank = 0;      // �����ÿ�
            }
        }

        // ��������� >= �����ģ���ôһ�������ҵ�һ����ʼ����������·��
        if (total_gas >= total_cost) return start;
        else return -1;
    }
};
