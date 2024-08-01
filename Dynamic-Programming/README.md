### 动态规划(Dynamic Programming)

动态规划的核心思想：把一个问题分解成一个个更小的子问题，根据子问题反推出正确答案，记住过去的解，**存储和重用子问题来得到答案**

#### P0053★★

题目描述：给你一个整数数组 `nums` ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

##### 思路

nums = [0, 1, 2, 3, 4];

从  i = 0 开始存储最大和maxsum nums[i], nums[i]中的元素必须包含从0到i之间的所有元素

如果maxsum nums[i - 1] =< 0，那么可以直接使用nums[i] 表示为maxsum nums[i];

如果maxsum nums[i - 1] > 0, 那么maxsum nums[i] = maxnums[i - 1] + nums[i];

返回maxsum nums[i] 中的最大值即可    

##### 总结

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
	int max = nums[0]; // 从 i = 0 开始依次向后遍历
	for(int i = 1; i <nums.size(); ++i)
	{
		if(nums[i - 1] <= 0)	nums[i] = nums[i];
		if(nums[i - 1] > 0)	nums[i] += nums[i - 1];
		if(nums[i] > max)	max = nums[i]
	}
	return max;
    }
};
```
