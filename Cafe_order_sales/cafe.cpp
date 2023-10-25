#include <iostream>
#include <string>

using namespace std;

#include "cafe.h"

int revenue_buff[10] = { 0 };
int sum = 0;
int k = 0;
int temp;
void cafe::coffee_order()
{
	int choice=0 ;
	int choice_buff[10];
	int sales_buff[10];
	
	int i = 0;
	
	
	coffee_info();
	while (1)
	{
		cout << "주문하실 커피 번호를 입력해주세요." <<  endl;
		cin >> choice;
		cout << endl;
		choice_buff[i] = choice;
		count[choice] += 1;
		i++;
		if (choice == 0)
		{
			break;
		}
		else if (choice < 0 || choice > 12)
		{
			cout << "주문하신 커피는 메뉴에 없습니다." << endl;
			cout << endl;
			continue;
		}
	
	}
	cout << "주문한 상품 : \n" << endl;
	for (int j = 0; j < i-1 ; j++)
	{
		
		temp = choice_buff[j];
		
		cout << coffee[temp] << " " << coffee_price[temp] << "원" <<endl;
		
		revenue_buff[k] += coffee_price[temp];
		revenue = revenue_buff[k];
	}
	
	cout << "합계 : " << revenue << endl;
	cout << endl;
	k++;
	
	return ;
}

void cafe::sales_coffee()
{
	for (int x = 0; x < k; x++)
	{

		sum += revenue_buff[x];
	}
	total_revenue = sum;
	cout << "============ 매출 통계 ============" << endl;
	for (int a = 1; a <= 12; a++)
	{
		if (count[a] > 0)
		{
			cout << coffee[a] << " " << count[a] << "개" << endl;
		}
	}
	cout << endl;
	cout << "매출액 총계 : " << total_revenue << "원" <<endl;
	cout << endl;
}
