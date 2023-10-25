#include <iostream>
using namespace std;

#include "car.h"
#include "Parking_fee.h"

void Parking_fee::calc()
{
	int hour, min;
	int a, b, result;
	int fee;
	int temp = 0;

	a = in_time;
	b = out_time;
	cout << "배차 시간을 입력하세요 : ";
	cin >> a;
	cout << "출차 시간을 입력하세요 : ";
	cin >> b; 
	hour = (((b / 100) * 60 + (b % 100)) - ((a / 100) * 60 + (a % 100))) / 60;
	min = (((b / 100) * 60 + (b % 100)) - ((a / 100) * 60 + (a % 100))) % 60;
	
	cout << hour << ":" << min << endl;
	
	if (disabled == 0)
	{
		if (hour >= 1)
		{
			if (min >= 30 && min < 40)
			{
				fee = hour * 2000 + 1000;
				cout << hour << ":" << min << endl;
			}
			else if (10 <= min && min < 30)
			{
				fee = (hour * 2000) + (((min / 10) + 1) * 400);
				cout << hour << ":" << min << endl;
			}
			else if (min > 40 && min <= 59)
			{
				fee = (hour * 2000) + (1000 + ((min - 30) / 10) * 400);
				cout << hour << ":" << min << endl;
			}
			else if (min > 0 && min < 10)
			{
				fee = hour * 2000 + 400;
				cout << hour << ":" << min << endl;
			}
			else if (min == 0)
			{
				fee = hour * 2000;
				cout << hour << ":" << min << endl;
			}
		}
		else
		{
			if (min >= 30 && min < 40)
			{
				fee = 1000;
			}
			else if (10 <= min && min < 30)
			{
				fee = ((min / 10)+1) * 400;
			}
			else if (min >= 40 && min <= 59)
			{
				fee = 1000 + ((min-30) / 10) * 400;
			}
			else if (min>0 &&min < 10)
			{
				fee = 400;
			}
		}
	}
		cout << "주차요금은" << fee << "원 입니다." << endl;
		
		
	
}
