
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]>=0){         //只有正数的情况
            vector<int> posvec(abs(nums[nums.size()-1])+1,0);
            for(int i=0;i<nums.size();i++){
                posvec[nums[i]]++;
            }
            for(int i=0;i<posvec.size();i++){
                if(posvec[i]==1){
                    return i;
                    break;
                 }
            }
        }
        else{       //有负数的情况
            vector<int> posvec(abs(nums[nums.size()-1])+1,0);
            vector<int> negvec(abs(nums[0])+1,0);
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=0){
                    posvec[nums[i]]++;
                }
                else{
                    negvec[abs(nums[i])]++;
                }
            }
            for(int i=0;i<posvec.size();i++){
                if(posvec[i]==1){
                    return i;
                    break;
                 }
            }
            for(int i=0;i<negvec.size();i++){
                if(negvec[i]==1){
                    return -i;
                    break;
                 }
            }
        }
        return 0;
    }
};
