#ifndef Parking_fee_H
#define Parking_fee_H
#include "car.h"

// Parking_fee 클래스 선언
class Parking_fee:public Car
{
private:
	int in_time; // 배차시간
	int out_time; // 출차시간
public:
	void calc();
};

#endif
