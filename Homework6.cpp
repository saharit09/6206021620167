#include <iostream>
using namespace std;
int calAm(int,int);
int main()
{
	int num, amount, year, i=1;
	cout << "Khoayai Bank Information System **Interest = 3%**\n";
	for(i=1;i<=3;i++)
	{
		cout << "Input Amount " << i << " :";
		cin >> amount;
		cout << "Input Year " << i << " :";
		cin >> year;
		cout << "Total your money " << i << " :" << calAm(amount,year) << endl;
		cout << "************************************************************\n";
	}
	return 0;
}
int calAm(int amount,int year)
{
	return(amount*0.03*year+amount);
}
