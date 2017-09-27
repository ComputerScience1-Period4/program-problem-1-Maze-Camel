/*
Maaz Kamal - 9/21/2017 - period 4
Assignment Name: Display Text 
Introduction to C++ Visual Studios
Printing out statements to Console from Code
*/


#include <iostream>
#include <conio.h>
using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char w = 'W';
	char r = 'r';
	char d = 'd';
	char m = ' ';
	cout << H << e << l << l << o << m << w << o << r << l << d << endl;
	cout << "Maaz Kamal" << endl;
	int var_period = 4;
	cout << var_period << "th period" <<endl;
	pause();
	return;
}
