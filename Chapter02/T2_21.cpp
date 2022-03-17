/*Filename:T2_21.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 输出矩形、椭圆、箭头和菱形
 */

#include <iostream>

using namespace std;

int main()
{
    int i=1;
    cout << "  矩形\n";
    cout << "*********\n";
    for(i=1;i<=7;i++)
    {
        cout << "*       *\n";
    }
    cout << "*********\n";
    cout << "  椭圆\n";
    cout << "   ***   \n";
    cout << " *     * \n";
    for(i=1;i<=5;i++)
    {
        cout << "*       *\n";
    }
    cout << " *     * \n";
    cout << "   ***   \n";
    cout << "  箭头\n";
    cout << "  *  \n" << " *** \n" << "*****\n";
    for(i=1;i<=6;i++)
    {
        cout << "  *  \n";
    }
    cout << "  菱形\n";
    cout << "    *    \n" << "   * *   \n" << "  *   *  \n" << " *     * \n";
    cout << "*       *\n";
    cout << " *     * \n" << "  *   *  \n" << "   * *   \n" << "    *    \n";
    return 0;
}

