#include <iostream>
#include <string>
using namespace std;

#include "cafe_menu.h"


void cafe_menu::show_menu()
{
	string cafe_menu =
		"========== CAFE MENU 리스트 ==========\n"
		"[1] 카페_아메리카노 Short 3.6\n"
		"[2] 카페_ 아메리카노 Tall 4.1\n"
		"[3] 카페_라떼 Short 4.1\n"
		"[4] 카페_라떼 Tall 4.6\n"
		"[5] 카푸치노 short 4.1\n"
		"[6] 카푸치노 Tall 4.6\n"
		"[7] 카페모카 Short 4.1\n"
		"[8] 카페모카 Tall 4.6\n"
		"[9] 카라멜_마키아또 Short 5.1\n"
		"[10] 카라멜_마키아또 Tall 5.6\n"
		"[11] 스타벅스_돌체_라떼 Short 5.1\n"
		"[12] 스타벅스_돌체_라떼 Tall 5.6\n"
		"=======================================\n"
		"1.커피 주문                            \n"
		"2.매출 통계                            \n"
		"3.종료                                 \n"
		"=======================================\n";
	cout << cafe_menu << endl;
}
void cafe_menu::coffee_info()
{
	coffee[1] = "카페_아메리카노 Short";
	coffee[2] = "카페_아메리카노 Tall";
	coffee[3] = "카페_라떼 Short";
	coffee[4] = "카페_라떼 Tall";
	coffee[5] = "카푸치노 short";
	coffee[6] = "카푸치노 Tall";
	coffee[7] = "카페모카 Short";
	coffee[8] = "카페모카 Tall";
	coffee[9] = "카라멜_마키아또 Short";
	coffee[10] = "카라멜_마키아또 Tall";
	coffee[11] = "스타벅스_돌체_라떼 Short";
	coffee[12] = "스타벅스_돌체_라떼 Tall";

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
