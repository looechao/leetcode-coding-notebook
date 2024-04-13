class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int left=0,spot=0;
        for(int i=0;i<gas.size();i++){     //�Ӳ�ͬ��������
            int j=i;
            left=0;
            while(1){
                left+=gas[j];    //����
                if(left<cost[j]) // ��ǰ�����Ͳ����Եִ���һ����վ
                    break;
                left-=cost[j];   //����
                j=(j+1)%gas.size();   //ǰ������һ������վ���������ĩβ��ص���ʼ
                if(j==i) // ������ǳɹ��ƻ�һȦ�����ؿ�ʼ������
                    return i;
            }
        }
        return -1;
    }
};
