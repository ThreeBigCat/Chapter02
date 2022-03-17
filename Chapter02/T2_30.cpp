/*Filename:T2_30.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 计算BMI
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout << "请输入你的体重：";
    cin >> a;
    cout << "请输入你的身高：";
    cin >> b;
    cout << "你的BMI为" << a*703/b << endl;
    cout << "BMI VALUES\n";
    cout << "Underweight：less than 18.5\n";
    cout << "Normal：     between 18.5 and 24.9\n";
    cout << "Overweight： between 25 and 29.9\n";
    cout << "Obese：      30 or greater\n";
    return 0;
}

