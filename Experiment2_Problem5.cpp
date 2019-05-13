#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number, first = 0, second = 1, next;
	cout << "Fibonacci numbers: \n" << first << ", " << second << ", ";
	next = first + second;
	while (next <= 10946)
	{
		cout << next << ", ";
		first = second;
		second = next;
		next = first + second;
	}
	_getch();
	return 0;
}