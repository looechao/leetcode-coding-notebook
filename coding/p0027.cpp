#include<vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)
            {
                pos.push_back(nums[i]);
            }
        }
        nums = pos;
        return nums.size();
    }
};
