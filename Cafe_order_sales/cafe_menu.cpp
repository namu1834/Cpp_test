#include <iostream>
#include <string>
using namespace std;

#include "cafe_menu.h"


void cafe_menu::show_menu()
{
	string cafe_menu =
		"========== CAFE MENU ����Ʈ ==========\n"
		"[1] ī��_�Ƹ޸�ī�� Short 3.6\n"
		"[2] ī��_ �Ƹ޸�ī�� Tall 4.1\n"
		"[3] ī��_�� Short 4.1\n"
		"[4] ī��_�� Tall 4.6\n"
		"[5] īǪġ�� short 4.1\n"
		"[6] īǪġ�� Tall 4.6\n"
		"[7] ī���ī Short 4.1\n"
		"[8] ī���ī Tall 4.6\n"
		"[9] ī���_��Ű�ƶ� Short 5.1\n"
		"[10] ī���_��Ű�ƶ� Tall 5.6\n"
		"[11] ��Ÿ����_��ü_�� Short 5.1\n"
		"[12] ��Ÿ����_��ü_�� Tall 5.6\n"
		"=======================================\n"
		"1.Ŀ�� �ֹ�                            \n"
		"2.���� ���                            \n"
		"3.����                                 \n"
		"=======================================\n";
	cout << cafe_menu << endl;
}
void cafe_menu::coffee_info()
{
	coffee[1] = "ī��_�Ƹ޸�ī�� Short";
	coffee[2] = "ī��_�Ƹ޸�ī�� Tall";
	coffee[3] = "ī��_�� Short";
	coffee[4] = "ī��_�� Tall";
	coffee[5] = "īǪġ�� short";
	coffee[6] = "īǪġ�� Tall";
	coffee[7] = "ī���ī Short";
	coffee[8] = "ī���ī Tall";
	coffee[9] = "ī���_��Ű�ƶ� Short";
	coffee[10] = "ī���_��Ű�ƶ� Tall";
	coffee[11] = "��Ÿ����_��ü_�� Short";
	coffee[12] = "��Ÿ����_��ü_�� Tall";

	coffee_price[1] = 3600;
	coffee_price[2] = 4100;
	coffee_price[3] = 4100;
	coffee_price[4] = 4600;
	coffee_price[5] = 4100;
	coffee_price[6] = 4600;
	coffee_price[7] = 4100;
	coffee_price[8] = 4600;
	coffee_price[9] = 5100;
	coffee_price[10] = 5600;
	coffee_price[11] = 5100;
	coffee_price[12] = 5600;

}
