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
		cout << "�ֹ��Ͻ� Ŀ�� ��ȣ�� �Է����ּ���." <<  endl;
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
			cout << "�ֹ��Ͻ� Ŀ�Ǵ� �޴��� �����ϴ�." << endl;
			cout << endl;
			continue;
		}
	
	}
	cout << "�ֹ��� ��ǰ : \n" << endl;
	for (int j = 0; j < i-1 ; j++)
	{
		
		temp = choice_buff[j];
		
		cout << coffee[temp] << " " << coffee_price[temp] << "��" <<endl;
		
		revenue_buff[k] += coffee_price[temp];
		revenue = revenue_buff[k];
	}
	
	cout << "�հ� : " << revenue << endl;
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
	cout << "============ ���� ��� ============" << endl;
	for (int a = 1; a <= 12; a++)
	{
		if (count[a] > 0)
		{
			cout << coffee[a] << " " << count[a] << "��" << endl;
		}
	}
	cout << endl;
	cout << "����� �Ѱ� : " << total_revenue << "��" <<endl;
	cout << endl;
}
