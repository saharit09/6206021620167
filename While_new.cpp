#include <iostream>
#include <string>
using namespace std;
int main()
{
	int  i=1, num, round, sum=0, neg=0, pos=0, zero=0;
	cout << "Enter Number of round : ";
	cin >> round;
	while(i <= round)
	{
		cout << "Input Number " << i << " :";
		cin >> num;
		if(num<0)neg++;
	    else if(num>0)pos++;
	    else if(num==0)zero++;
		sum = sum+num;
		i++;
		
	}
	cout << "Negative : " << neg << endl;
	cout << "Positive : " << pos << endl;
	cout << "Zero : " << zero << endl;
	//cout << "Total : " << sum << endl;
	//cout << "Average : " << (float)sum/round << endl;

	return 0;
}
