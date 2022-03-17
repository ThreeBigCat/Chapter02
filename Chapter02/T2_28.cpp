/*Filename:T2_28.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入一个5位整数，然后分解它的每位数字
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,n;
    cout << "请输入一个5位整数：";
    cin >> n;
    if(n<0)
    {
        n=-n;
    }
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    cout << e << "   " << d << "   " << c << "   " << b << "   " << a;
    return 0;
}

