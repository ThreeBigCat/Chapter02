/*Filename:T2_24.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入一个整数，判断该数是偶数还是奇数
 */

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a%2==0)
    {
        cout << "该数为偶数";
    }
    else
    {
        cout << "该数为奇数";
    }
    return 0;
}
