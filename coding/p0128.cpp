#include<algorithm>
#include<cmath>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int max_count = 1;
        int current_count = 1;
        for(int i = 1; i < nums.size(); i++){    //统计最大的连续个数
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    current_count++;
                } else {        //当遇到重复元素时,计数不能增加
                    current_count = 1;
                }
                max_count = max(max_count, current_count);
            }
        }
        return max_count;
    }
};
