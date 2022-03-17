/*Filename:T2_25.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入2个整数,判断第一个数是否为第二个数的倍数
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "请输入第一个数：";
    cin >> a;
    cout << "请输入第二个数：";
    cin >> b;
    if(a%b==0)
    {
        cout << a << "是" << b << "的" << "倍数";
    }
    else
    {
        cout << a << "不是" << b << "的" << "倍数";
    }
    return 0;
}

