#include <iostream>
using namespace std;
void add (int, int);
void subract (int, int);
void multiply (int, int);
void devide (int, int);
int main()
{
	int a, b;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	add(a,b);
	subract (a,b);
	multiply (a,b);
	devide (a,b);
	return 0;
}
void add (int a, int b)
{
	cout << "Add value = " << a+b << endl;
}
void subract (int a, int b)
{
	cout << "ubract value = " << a-b << endl;
}
void multiply (int a, int b)
{
	cout << "Multiply value = " << a*b << endl;
}
void devide (int a, int b)
{
	cout << "Devide value = " << a/b << endl;
}
