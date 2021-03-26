#include <iostream>
using namespace std;
int main()
{
	int i, total = 0, a[5];
	for(i=0;i<=4;i++)
	{
		cout << "Enter value for a[" << i << "] :";
		cin >> a[i];
	}
	cout << "Show all value\n";
	for(i=0;i<4;i++)
	{
		cout  << "a[" << i << "] =" << a[i];
		cout << endl;
		total = total+a[i];
	}
	cout << total << endl;

	return 0;
}