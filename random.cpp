#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{   
	int value,round=0,n;
	cout<<"### Welcome to guessing number game ###\n";
	cout<<"Secret number has been chosen\n";
	srand(time(NULL));
	n=1+rand()%10; 
	do
	{
		cout<<"Guess the number (1 to 10): ";
		cin>>value;
		if(value<n)
		{
			cout<<"The secret number is lower\n";
		}else cout<<"The secret number is higher\n";
		round+=1;
	}while(value!=n);
	cout<<setw(50);
	cout<<setfill('-');
	cout<<"\nCongratulations!\n";
	cout<<"The secret number is "<<n<<endl;
	cout<<"You made "<< round <<" guesses\n";
	return 0;
}
