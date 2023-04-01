#include <iostream>

using namespace std;

int main()
{
	//Write programs with loops that compute
	
	//	a.The sum of all even numbers between 2 and 100 (inclusive).
	int sum = 0;
	for (int i = 2; i <= 100; i += 2)
	{
		sum += i;
	}
	cout << "The sum of all even numbers is: " << sum << endl << endl;

	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	cout << "The sum of all even numbers is: " << sum << endl << endl;


	//	b.The sum of all squares between 1 and 100 (inclusive).
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i * i;
	}
	cout << "The sum of all the squares between 1 and 100 is: " << sum << endl << endl;


	//	c.All powers of 2 from 20 up to 220.
	for (int i = 20; i <= 220; i++)
	{
		cout << pow(2, i) << " ";
	}
	cout << endl << endl;


	//	d.The sum of all odd numbers between a and b(inclusive), where a and b are inputs.
	int firstnum, lastnum;
	cout << "Enter the first nubmer: ";
	cin >> firstnum;

	cout << "Enter the second nubmer: ";
	cin >> lastnum;

	for (int i = firstnum; i <= lastnum; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << " ";
		}
	}
	cout << endl << endl;


	//	e.The sum of all odd digits of an input. (For example, if the input is 32677, the sum would be 3 + 7 + 7 = 17.)
	sum = 0;
	int n;
	cout << "Eneter the nubmer: ";
	cin >> n;
	for (int digit; n > 0; n /= 10)
	{
		digit = n % 10;
		if (digit % 2 == 1)
		{
			sum += digit;
		}
	}
	cout << "The sum of all odd digits of an input: " << sum << endl << endl;

	n = 0;
	cout << "Enter a value for n: ";
	cin >> n;
	sum = 0;
	while (n > 0) {
		int digit = n % 10;
		if (digit % 2 == 1) {
			sum += digit;
		}
		n /= 10;
	}
	cout << "The sum of all odd digits of an input: " << sum << endl;

	return 0;
}