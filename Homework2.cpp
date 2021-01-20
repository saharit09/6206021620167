#include <iostream>

using namespace std;
int main()
{
	char name;
	int salary, sale, CP, revenue;
	cout << "******Homework2************\n";
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> CP;
	revenue = (sale*CP/100) + salary;
	cout << "----------output--------------\n";
	cout << "Your Name : " << name << endl;
	cout << "Total Revenue : " << revenue << endl;
	return 0;
}
