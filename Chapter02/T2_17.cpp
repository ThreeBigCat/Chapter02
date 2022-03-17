/*Filename:T2_17.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 在同一行输出1至4，每个数用空格隔开
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "使用一条语句，包含1个流插入运算符\n";
    cout << "1 2 3 4\n";
    cout << "使用一条语句，包含4个流插入运算符\n";
    cout << "1 " << "2 " << "3 " << "4\n";
    cout << "使用4条语句\n";
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4";
    return 0;
}
