/*Filename:T2_20.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输入圆的半径，输出圆的直径、周长和面积
 */

#include <iostream>

using namespace std;

int main()
{
    int r;
    double pi=3.14159;
    cout << "请输入圆的半径r" << endl;
    cin >> r;
    cout << "圆的直径为" << 2*r << endl;
    cout << "圆的周长为" << 2*r*pi << endl;
    cout << "圆的面积为" << pi*r*r << endl;
    return 0;
}
