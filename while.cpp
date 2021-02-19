#include <iostream>
#include <string>
using namespace std;
int main()
{
	int  i=1, num, round, sum=0;
	cout << "Enter Number of round : ";
	cin >> round;
	while(i <= round)
	{
		cout << "Input Number " << i << " :";
		cin >> num;
		sum = sum+num;
		i++;
		
	}
	cout << "Total : " << sum << endl;
	cout << "Average : " << (float)sum/round << endl;

	return 0;
}