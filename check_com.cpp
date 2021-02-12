#include <iostream>
using namespace std;
float check_com(int);
int main()
{
	int sale;
	cout << "Enter sale : ";
	cin >> sale;
	check_com(sale);
	
	return 0;
}
float check_com (int sale)
{
	if (sale < 10000)
	{
		cout <<  "Commission Rate is : " << sale*0.10 << endl;
	}
	else if (sale >= 10000 && sale == 15000)
	{
		cout <<  "Commission Rate is : " << sale*0.15 << endl;
	}
	else
	{
		cout <<  "Commission Rate is : " << sale*0.20 << endl;
	}
}
