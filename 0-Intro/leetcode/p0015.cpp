#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size() < 3) return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size()-2; ++i) {
            // 避免重复的三元组
            if(i > 0 && nums[i] == nums[i-1]) continue;

            // 双指针
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                if(nums[i] + nums[left] + nums[right] == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                } else if(nums[i] + nums[left] + nums[right] > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return result;
    }
};
