/*Filename:T2_26.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: ��ʾ����ͼ��
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "��8�������ʾ����ͼ��" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "********" << endl;
    cout << " ********" << endl;
    cout << "�þ������ٵ������ʾ����ͼ��" << endl;
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
