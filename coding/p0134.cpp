class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int left=0,spot=0;
        for(int i=0;i<gas.size();i++){     //从不同的起点出发
            int j=i;
            left=0;
            while(1){
                left+=gas[j];    //加油
                if(left<cost[j]) // 当前的汽油不足以抵达下一加油站
                    break;
                left-=cost[j];   //耗油
                j=(j+1)%gas.size();   //前进到下一个加油站，如果到达末尾则回到开始
                if(j==i) // 如果我们成功绕环一圈，返回开始的索引
                    return i;
            }
        }
        return -1;
    }
};
