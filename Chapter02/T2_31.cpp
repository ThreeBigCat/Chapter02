/*Filename:T2_31.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 11th,2022
 *College:  Henan University
 *Function: 求汽车每日消费 
 */
 
#include <iostream>

using namespace std;

int main()
{
	double a,b,c,d,e;
	cout << "请输入每天开的总英里数：";
	cin >> a;
	cout << "请输入每加仑汽油的价格：";
	cin >> b;
	cout << "请输入每加仑汽油可以开的平均英里数：";
	cin >> c;
	cout << "请输入每日的停车费：";
	cin >> d;
	cout << "请输入每日的通行费：";
	cin >> e;
	cout << "你当天的消费为" << (a/c)*b+d+e;
	return 0; 
}
