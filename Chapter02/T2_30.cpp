/*Filename:T2_30.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: ����BMI
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout << "������������أ�";
    cin >> a;
    cout << "������������ߣ�";
    cin >> b;
    cout << "���BMIΪ" << a*703/b << endl;
    cout << "BMI VALUES\n";
    cout << "Underweight��less than 18.5\n";
    cout << "Normal��     between 18.5 and 24.9\n";
    cout << "Overweight�� between 25 and 29.9\n";
    cout << "Obese��      30 or greater\n";
    return 0;
}
