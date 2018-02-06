#include <iostream>

using namespace std;

void Part1() {
	cout << " -----------MENU------------" << endl;
	cout << " Drinks...................$2" << endl;
	cout << " Sandwiches...............$4" << endl;

	short total, drinks, sandwiches, priceDrinks, priceSandwiches;

	cout << "      How many Drinks? : ";
	cin >> drinks;
	cout << "\n       How many Sandwhiches? : ";
	cin >> sandwiches;

	priceDrinks = 2;
	priceSandwiches = 4;


	_asm {
		mov		ax, drinks; 
		imul	priceDrinks;
		mov		bx, ax;
		mov		ax, sandwiches;
		imul	priceSandwiches;
		add		ax, bx;
		mov		total, ax;

	}
	
	cout << "\n			Your total bill : " << total << endl;



}