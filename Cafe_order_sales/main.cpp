#include <iostream>
#include <string>
using namespace std;

#include "cafe_menu.h"
#include "cafe.h"
int main()
{
    cafe_menu MENU;
	cafe CA;
    
    while (1)
    {
        int select_num;
        int total_revenue = 0;
        MENU.show_menu();
        cout << "원하는 메뉴를 입력하세요. : ";
        cin >> select_num;
        cout << endl;
        
        switch (select_num)
        {
        case 1:
            CA.coffee_order();
            break;
        case 2:
            CA.sales_coffee();
            break;
        case 3:
            return 0;
            break;

        default:
            cout << "잘못된 번호를 입력하셨습니다" << endl;
            break;
        }
    }
    return 0;
}