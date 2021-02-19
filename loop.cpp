#include <iostream>
#include <string>
char check_score(int);
using namespace std;
int main()
{
	int sc, num1;
	string name;
	
	cout << "Enter Number of Student : ";
	cin >> num1;
	for(int i=1;i<=num1;i++)
	{
		cout << "Enter Name " << i << ": ";
		cin >> name;
		cout << "Enter Score "<< i << ": ";
		cin >> sc;
		cout << name << " got : " << check_score(sc) << endl;
		cout << "--------------------------------" << endl;

	}
	return 0;
}
char check_score(int sc)
{
		char grade;
		if(sc >= 80) grade = 'A';
		else if(sc >= 70) grade = 'B';
		else if(sc >= 60) grade = 'C';
		else if(sc >= 50) grade = 'D';
		else grade = 'F';
		return (grade);
}