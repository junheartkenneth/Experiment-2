#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char package;
	int	hour;
		cout << "Good Day Valued Customer!" << endl;
		cout << "Please enter your current package plan" << "\nA - Package A \nB - Package B \nC - Package C\n"; cin >> package;
		
		switch (package)
		{
		case 'A':
			cout << "Please enter duration consumption\n"; cin >> hour;
			if (hour <= 10)
				cout << "Your total amount due is: " << 995 << " " << "pesos" << endl;
			else
				cout << "Your total amount due is: " << 995 + ((hour - 10) * 20) << " " << "pesos" << endl;
			break;
		case 'B':
			cout << "Please enter duration consumption\n"; cin >> hour;
			if (hour <= 20)
				cout << "Your total amount due is: " << 1495 << " " << "pesos" << endl;
			else
				cout << "Your total amount due is: " << 1495 + ((hour - 20) * 10) << " " << "pesos" << endl;
			break;
		case 'C':
				cout << "Your total amount due is: " << 1995 << " " << "pesos" << endl;
			break;
		}
		_getch();
		return 0;
}