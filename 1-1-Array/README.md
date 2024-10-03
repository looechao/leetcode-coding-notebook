|      | Title                                                        | Solution | TAGS  | Difficulty |
| ---- | ------------------------------------------------------------ | -------- | ----- | ---------- |
| 0066 | [加一](https://leetcode.cn/problems/plus-one/)               | C++      | Array | EASY       |
| 0724 | [寻找数组的中心下标](https://leetcode.cn/problems/find-pivot-index/) | C++      | Array | EASY       |

# P0724 EASY

#### 题目描述

[寻找数组的中心下标](https://leetcode.cn/problems/find-pivot-index/)

数组 **中心下标** 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。

如果中心下标位于数组最左端，那么左侧数之和视为 `0` ，因为在下标的左侧不存在元素。这一点对于中心下标位于数组最右端同样适用。

如果数组有多个中心下标，应该返回 **最靠近左边** 的那一个。如果数组不存在中心下标，返回 `-1` 。

#### 思路

1. 暴力求解，for循环求pivot两边的元素和
2. 如果遇到相等的就在for循环中返回i
3. 否则在循环外返回 -1；

#### 总结

```c++
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int sumleft = 0;
            int sumright = 0;
            for (int l = 0; l < i; ++l) {
                sumleft += nums[l];
            }
            for(int r = i+1; r < nums.size(); ++r){
                sumright += nums[r];
            }
            if(sumleft == sumright){
                return i;
            }
        }
        return -1;
    }
};
```

更高效的解法

```C++
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumleft = 0;
        int sumright = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); ++i){
            sumright -= nums[i];
            if(sumleft == sumright){
                return i;
            }
            sumleft += nums[i];
        }
        return -1;
    }
};
```





# P0066 EASY

#### 题目描述

  [加一](https://leetcode.cn/problems/plus-one/)

给定一个由 **整数** 组成的 **非空** 数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储**单个**数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

#### 思路

需要考虑到进位机制

1. 如果该位数值达到了10，那么就归零，并让前一位数据+1；

2. 最后的结果如果首位的元素是10，那么需要新建vector存储元素

   > 更好的解法，不需要新建vector, 直接使用insert，在首部添加1

#### 总结

```c++
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        digits[n] += 1;
        for(int i = n; i >= 0; i--){
            if(digits[i] == 10 && i != 0){
                digits[i-1] += 1;
                digits[i] = 0;  
            }
            if(digits[i] == 10 && i == 0){
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};
```



# P EASY

#### 题目描述

#### 思路

#### 总结