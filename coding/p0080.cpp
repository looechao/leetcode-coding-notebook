class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=nums.size()-1;j>i;j--){    //´ÓºóÍùÇ°É¨Ãè
                if(nums[j]==nums[i]){
                    count++;
                }
            }
            if(count>2){
                for(int j=nums.size()-1;j>i;j--){
                    if(nums[j]==nums[i]){
                        count--;
                        nums.erase(nums.begin()+j);
                    }
                    if(count==2)
                        break;
                }
            }
        }
        return nums.size();
    }
};
