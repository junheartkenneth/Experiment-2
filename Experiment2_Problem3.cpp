#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x, y;
	const float z = 2.5;

	cout << "Enter value for x: \n"; cin >> x;
	cout << "Enter value for y: \n"; cin >> y;

	switch (x)
	{
	case 1:
		if (y > 1 && y < 5)
		{
			cout << fixed;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The value of V is: " << x * y * z;
		}
		else if (y >= 5)
		{
			cout << fixed;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The value of V is: " << x + (y / z);
		}
		else
		{
			cout << fixed;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The value of V is: " << x + y + z;
		}
		break;
	case 2:
		if (y <= 5)
		{
			cout << fixed;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The value of V is: " << abs((x - y) / z);
		}
		else if (y > 5)
		{
			cout << fixed;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The value of V is: " << x - sqrt(y + z);
		}
		else
		{
			cout << fixed;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The value of V is: " << x + y + z;
		}
		break;
	default:
		cout << fixed;
		cout << setprecision(2);
		cout << setw(10);
		cout << "The value of V is: " << x + y + z;
	}
	_getch();
	return 0;
}