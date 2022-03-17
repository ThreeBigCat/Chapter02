/*Filename:T2_29.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 计算整数0到10的平方和立方
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "integer " << "square " << "cube" << endl;
    for(int i=0;i<=10;i++)
    {
        cout << i << "\t" << i*i << "\t" << i*i*i << endl;
    }
    return 0;
}

