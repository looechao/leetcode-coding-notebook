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

    long long sum = 0; // ��¼�ܺ�
    long long n = 0;   // ��ǰ������
    long long total = 0; // ������

    // ���������ڲ�ѭ��
    while (total < k)
    {
        ++n;
        total += n;
    }

    // �������������k����ֵ��total - k�����Ƕ������������Ҫ���ܺ��п۳�
    if (total > k)
    {
        sum = (1 + n) * n / 2;
        sum -= total - k;
    }
    else
    {
        // ����������ֱ��ʹ�ù�ʽ����
        sum = (1 + n) * n / 2;
    }

    cout << sum << endl;
    return 0;
}
