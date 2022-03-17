/*Filename:T2_19.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入3个整数，输出它们的和、平均值、乘积、最小值、最大值
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Input three different integers: ";
    cin >> a >> b >> c;
    cout << "Sum is " << a+b+c << endl;
    cout << "Average is " << (a+b+c)/3 << endl;
    cout << "Product is " << a*b*c << endl;
    if(a<c)
    {
        c=a;
    }
    if(b<c)
    {
        c=b;
    }
    cout << "Smallest is " << c <<endl;
    if(a>b)
    {
        cout << "Largest is " << a <<endl;
    }
    else
    {
        cout << "Largest is " << b <<endl;
    }
    return 0;
}

