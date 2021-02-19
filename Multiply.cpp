#include <iostream>
using namespace std;
int main()
{
	int num1, num2, sum = 0;
	cout << "Enter first number : ";
	cin >> num1;
	cout << "Enter Second number : ";
	cin >> num2;
	for (int n=1; n<=num2; n=n++)
	{
		cout << num1 << " * " << n << " = " << num1*n <<  endl;
		sum = sum+(num1*n);
	}
	cout << "sum = " << sum << endl;
	return 0;
}