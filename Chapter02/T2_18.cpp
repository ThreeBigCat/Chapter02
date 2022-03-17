/*Filename:T2_18.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入两个整数数，比较两个数的大小
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(a>b)
    {
        cout << a << " is large";
    }
    if(a<b)
    {
        cout << b << " is large";
    }
    if(a==b)
    {
        cout << "These numbers are equal.";
    }
    return 0;
}
