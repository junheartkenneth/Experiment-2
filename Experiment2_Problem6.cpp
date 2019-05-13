#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, n, sum = 0;
	do
	{
		cout << "\nEnter a desired number: ";
		cin >> n;
		if (n <= 0)
			break;
		for (i = 1; i <= n; ++i)
		{
			sum += i;
		}
		cout << "The sum of all whole numbers from 1 to" << " " << n << " " << "is: " << sum;
		sum = 0;
	} while (n > 0);
	cout << "\nThank you!" << endl;
	_getch();
	return 0;
}