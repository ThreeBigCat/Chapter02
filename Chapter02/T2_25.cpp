/*Filename:T2_25.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: ����2������,�жϵ�һ�����Ƿ�Ϊ�ڶ������ı���
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "�������һ������";
    cin >> a;
    cout << "������ڶ�������";
    cin >> b;
    if(a%b==0)
    {
        cout << a << "��" << b << "��" << "����";
    }
    else
    {
        cout << a << "����" << b << "��" << "����";
    }
    return 0;
}
