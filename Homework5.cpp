#include <iostream>
using namespace std;
int main()
{
	int num, pass=0, fail=0;
	while(num != -999 )
	{
		cout << "Enter point (0-100) or -999 : ";
		cin >> num;
		if(num > 50 && num <= 100)pass++;
		else if(num >= 0)fail++;
		if(num > 100)
		{
			cout << "--------------------------------------------\n";
			cout << "Re-Enter point (0-100) or -999 : ";
			cin >> num;
			if (num < 0)
			{
				cout << "--------------------------------------------\n";
				cout << "Re-Enter point (0-100) or -999 : ";
				cin >> num;
				
			}
		}
		else if(num == -999) break;
		else if(num < 0)
		{
			cout << "--------------------------------------------\n";
			cout << "Re-Enter point (0-100) or -999 : ";
			cin >> num;
			if(num > 100)
			{
				cout << "--------------------------------------------\n";
				cout << "Re-Enter point (0-100) or -999 : ";
				cin >> num;
			}
		}
	}
	cout << "Pass : " << pass << " students " << endl;
	cout << "Fail : " << fail << " students " << endl;
	
	return 0;
}
