#ifndef Parking_fee_H
#define Parking_fee_H
#include "car.h"

// Parking_fee Ŭ���� ����
class Parking_fee:public Car
{
private:
	int in_time; // �����ð�
	int out_time; // �����ð�
public:
	void calc();
};

#endif
