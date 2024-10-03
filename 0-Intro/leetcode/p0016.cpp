class Solution {
public:
    int max=100000,sum=0;
    int threeSumClosest(vector<int>& nums, int target) {    //±©Á¦Çó½â
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    int s=nums[i]+nums[j]+nums[k]-target;
                    if(s<0)
                        s=abs(s);
                    if(s<=max)
                    {
                        max=s;
                        sum=nums[i]+nums[j]+nums[k];
                    }
                }
            }
        }
        return sum;
    }
};
