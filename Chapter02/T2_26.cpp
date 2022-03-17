/*Filename:T2_26.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 显示棋盘图案
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "用8条语句显示棋盘图案" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "用尽可能少的语句显示棋盘图案" << endl;
    for(int i=1;i<=8;i++)
    {
        if(i%2==0)
        {
            cout << " ********" << endl;
        }
        else
        {
            cout << "********" << endl;
        }
    }
    return 0;
}
