#include <iostream>

using namespace std;

//Short type variables
//create a menu with sandwich and drinks, take user input, compute total price of bill
void Part1() {
	//menu
	cout << " -----------MENU------------" << endl;
	cout << " Drinks...................$2" << endl;
	cout << " Sandwiches...............$4" << endl;

	short total, drinks, sandwiches, priceDrinks, priceSandwiches;

	//input
	cout << "      How many Drinks? : ";
	cin >> drinks;
	cout << "\n       How many Sandwhiches? : ";
	cin >> sandwiches;

	priceDrinks = 2;
	priceSandwiches = 4;

	//compute total bill. # of Drinks * price of Drinks + # of Sandwiches * price of Sandwiches
	_asm {
		mov		ax, drinks; 
		imul	priceDrinks;
		mov		bx, ax;
		mov		ax, sandwiches;
		imul	priceSandwiches;
		add		ax, bx;
		mov		total, ax;

	}
	
	//output
	cout << "\n	        Your total bill : " << total << endl;

	return;

}

void Part2() {
	cout << "\n      /|\                      ----------------------" << endl;
	cout << "     / | \ b                   |                     |    width" << endl;
	cout << " a  /  |  \                    |                     |" << endl;
	cout << "   / h |   \                   |                     |" << endl;
	cout << "  /    |    \                  |                     |    " << endl;
	cout << "  -----------                  ----------------------" << endl;
	cout << "        c							    length" << endl;



	




}