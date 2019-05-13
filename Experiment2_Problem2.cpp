#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double pbalance;
	double	preading;
	double creading;
	cout << "Please enter previous balance\n"; cin >> pbalance;
	cout << "Please enter previous reading\n"; cin >> preading;
	cout << "Please enter current reading\n"; cin >> creading;

	if (pbalance < 0 || creading < preading)
	{
		cout << fixed;
		cout << setprecision(2);
		cout << "Invalid data! Please double check your input\n" << endl;
	}
	else if (pbalance > 0)
	{
	cout << fixed;
	cout << setprecision(2);
	cout << "Your total bill is: " << pbalance + 20 + 35 + ((creading - preading) * 1.10) << " " << "pesos\n" << endl;
	}
	else
	{
		cout << fixed;
		cout << setprecision(2);
		cout << "Your total bill is: " << 35 + ((creading - preading) * 1.10) << " " << "pesos\n" << endl;
	}
	_getch();
	return 0;
}