#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int counter;
	cout << "counting...\n";
	counter = 1;
	do
	{
		cout << counter << ", ";
		counter++;
	} while (counter <= 10);	counter = 12;
	do
	{
		cout << counter << ", ";
		counter += 2;
	} while (counter <= 28);
	cout << 30 << endl;
	_getch();
	return 0;
}