#include <iostream>
using namespace std;
int add (int, int);
int sub (int, int);
int mul (int, int);
int dev (int, int);
int main()
{
	int a, b;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	//int sum1 = add(a,b);  // get value from add to sum
	//cout << "a+b = " << sum1 << endl; // show sum value
	cout << "a+b = " << add(a,b) << endl; // show sum value
	cout << "a-b = " << sub(a,b) << endl;
	cout << "a*b = " << mul(a,b) << endl;
	cout << "a/b = " << dev(a,b) << endl;
	return 0;
}
int add (int a, int b)
{
	//int result = a+b;
	return(a+b);
}
int sub (int a, int b)
{
	return(a-b);
}
int mul (int a, int b)
{
	return(a*b);
}
int dev (int a, int b)
{
	return(a/b);
}
