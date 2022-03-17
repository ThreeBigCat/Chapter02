/*Filename:T2_23.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入5个整数，输出其中的最大值与最小值
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,max,min;
    cout << "请输入5个整数：";
    cin >> a >> b >> c >> d >> e;
    max=a;
    min=a;
    if(max<=b)
    {
        max=b;
    }
    if(max<=c)
    {
        max=c;
    }
    if(max<=d)
    {
        max=d;
    }
    if(max<=e)
    {
        max=e;
    }
        if(min>=b)
    {
        min=b;
    }
    if(min>=c)
    {
        min=c;
    }
    if(min>=d)
    {
        min=d;
    }
    if(min>=e)
    {
        min=e;
    }
    cout << "5个数中最大值为" << max << endl;
    cout << "5个数中最小值为" << min << endl;
    return 0;
}
