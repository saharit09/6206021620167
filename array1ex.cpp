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
	int min = a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]>5) a[i] = a[i]/2;
		cout  << "a[" << i << "] =" << a[i];
		cout << endl;
		total = total+a[i];
		if(a[i]<min) min = a[i];
	}
	cout << "Total : " << total << endl;
	cout << "Minimum : " << min << endl;
	//cout << "Maximum : " << max << endl;

	return 0;
}