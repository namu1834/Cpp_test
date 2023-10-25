#include <iostream> 
using namespace std;

#include "car.h"
#include "Parking_fee.h"

int main()
{
	Car car;
	Parking_fee park;
	park.Car_info();
	park.calc();
}