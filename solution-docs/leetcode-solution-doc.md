# P0001★
题目描述：two-sum
#### 思路
- 暴力解，遍历所有的组合
- 当和等于target时，立即返回数组下标
#### 总结
```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
```
# P3sum★
题目描述：在整数中找出vector<int> vec(3), 使得vec中的元素满足 i != j、i != k 且 j != k ，同时还满足 nums[i] + nums[j] + nums[k] == 0
#### 思路
参考了题解，关键是要避免重复的三元组，下标出现的顺序不重要
#### 总结
```c++

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
```
# P0016★
题目描述：3sum-closet:给你一个长度为 n 的整数数组 nums 和 一个目标值 target。请你从 nums 中选出三个整数，使它们的和与 target 最接近。
#### 思路
- 暴力求解，找到所有的三数组合，计算target与其和的接近程度
- 返回最接近的三数组合中数字的和
#### 总结
独立完成的一道题，时间复杂度较高：
```c++
#include<climits>
class Solution {
public:
    int max=INT_MAX,sum=0;
    int threeSumClosest(vector<int>& nums, int target) {
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
```
# P0026★
题目描述：remove-duplicates-from-sorted-array:删除数组中的重复项，并且返回删除完后的数组长度
#### 思路1
使用双重for循环，删除重复元素，在删除操作后nums的size会发生变化，需要从头开始，也就是每次双重循环只能进行一次删除然后再重新开始
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==nums[i])   //找到与nums[i]重复的元素并删除
                {
                    nums.erase(nums.begin()+j);
                    return removeDuplicates(nums);
                }
            }
        }
        return nums.size();
    }
};
```
这段代码的逻辑没问题，但是只能通过360/362个样例，会超时
#### 思路2
其实可以不用对vector进行操作，题设只需要统计不重复的元素的总数，只用做统计就可以了，使用双指针进行操作；
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0;
        int q = 1;
        while(q < nums.size()){
            if(nums[p]!=nums[q]){
                nums[p+1]=nums[q];
                p++;
            }
            q++;
        }
        return p+1;
    }
};
```
对这个双指针的算法理解还不够到位
# P0027★
题目描述：给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
#### 思路
我的解法是用时间换空间，重新创建一个vec pos用于存放不包含val元素的数值，最后要把pos赋值给vec
#### 总结
```c++
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
```
# P0066★
题目描述：plus one 给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一
#### 思路1
将数组转换成字符串，再将字符串转换成整型，然后加1，再换回整型，需要使用到stoi函数，但是这个函数的范围可能不够大，会超出整型的范围
```c++
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string str;
        vector<int> vec;
        for(int i=0;i<digits.size();i++){   //换成字符串
            string x=to_string(digits[i]);    
            str.push_back(x.at(0));
        }
        int num=stoi(str)+1;  //字符串换整型+1
        string str2=to_string(num);
        for(int i=0;i<str2.size();i++){   //整型换成数组
            vec.push_back(stoi(str2.substr(i,1)));
        }
        return vec;
    }
};
```
上述代码逻辑没问题，但是容易报错
#### 思路2
直接在vec上操作，处理进位操作；
```c++
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        add(digits,digits.size()-1);
        return digits;
    }
    void add(vector<int>& vec,int x){    //进位方法
        if(vec[x]<9)
        {
            vec[x]++;
        }
        else
        {
            if(x!=0){
                vec[x]=0;
                return add(vec,x-1);
            }
            if(x==0)
            {
                vec[x]=0;
                vec.insert(vec.begin(),1);
            }
        }
    }
};
```




# P0080★
题目描述：remove-duplicates-from-sorted-array-ii-给你一个有序数组 `nums` ，请你**[ 原地](http://baike.baidu.com/item/原地算法)** 删除重复出现的元素，使得出现次数超过两次的元素**只出现两次** ，返回删除后数组的新长度。
#### 思路

- 暴力求解
- 第二根指针从后往前扫描

#### 总结

```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=nums.size()-1;j>i;j--){    //从后往前扫描
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
```
# P0128★
题目描述：最长连续序列，给定一个未排序的整数数组 nums ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。
#### 思路
- 一开始尝试了双重循环的暴力解，但是时间复杂度很高，故放弃
- 使用sort函数排序后再统计，方便很多
#### 总结
```c++
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
```









# P★
题目描述：
#### 思路
#### 总结