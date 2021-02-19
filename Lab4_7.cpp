#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter first number : ";
	cin >> num1;
	cout << "Enter Second number : ";
	cin >> num2;
	for (int n=num2; n>=num1; n=n-2)
	{
		cout << n << endl;
	}
	return 0;
}