#include <iostream>
using namespace std;
int main()
{
	char type;
	int hour, workrate;
	cout << "Enter type (a, b, etc.) : ";
	cin >> type;
	cout << "Enter work hours (hr.) : ";
	cin >> hour;
	switch (type)
	{
		case 'a' : workrate = 30;break;
		case 'b' : workrate = 40;break;
		default  : workrate = 45;
	}
	cout << "Rate is " << workrate << " | total pay = " << hour * workrate << "THB." << endl;
	return 0;
}
