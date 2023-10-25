#ifndef cafe_menu_H
#define cafe_menu_H
class cafe_menu
{
public:
	string coffee[20]; 
	int coffee_price[20] = { 0 }; 
	void show_menu();
	void coffee_info();
};
#endif