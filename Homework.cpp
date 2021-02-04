#include <iostream>
using namespace std;
float cal_com(int,int,int);
int main()
{
	char name;
	int salary, sale, CP, revenue;
	cout << "******Homework3************\n";
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> CP;
	cout << "----------output--------------\n";
	cout << "Your Name : " << name << endl;
	cout << "Total Revenue : " << cal_com(salary,sale,CP) << endl;
	return 0;
}
float cal_com(int salary, int sale, int CP)
{
	return (sale*CP/100) + salary;
}
