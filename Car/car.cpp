#include <iostream>
using namespace std;

#include "car.h"

void Car::Car_info()
{
	t_carinfo_arr[100];
	cout << "차량번호 : ";
	cin >> car_num;
	cout << "주차 위치: ";
	cin >> location;
	cout << "장애인 유무 ex) true = 1 : ";
	cin >> disabled;

}