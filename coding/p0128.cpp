#include<climits>
class Solution {
public:
    int max=0;
    int longestConsecutive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=1;
            int start=nums[i]+1;
            for(int j=0;j<nums.size();j++){    //ͳ�Ʊ�����ʼԪ�ص��������ֵ
                if(nums[j]==start){
                    count++;
                    start=nums[j]+1;
                    j=-1;
                }
            }
            if(count>=max)
                max=count;
        }
        return max;
    }
};
