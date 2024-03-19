#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    long long k;
    cin >> k;

    long long sum = 0; // 记录总和
    long long n = 0;   // 当前正整数
    long long total = 0; // 总天数

    // 用余额法代替内层循环
    while (total < k)
    {
        ++n;
        total += n;
    }

    // 如果总天数超过k，差值（total - k）就是多余的天数，需要从总和中扣除
    if (total > k)
    {
        sum = (1 + n) * n / 2;
        sum -= total - k;
    }
    else
    {
        // 否则就是相等直接使用公式计算
        sum = (1 + n) * n / 2;
    }

    cout << sum << endl;
    return 0;
}
