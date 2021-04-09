#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream InFile;
	ofstream OutFile;
	int  score, num;
	char grade;
	string name;
	OutFile.open("Grade.dat", ios_base::out | ios_base::app); //เปิดเขียน
	if(OutFile.is_open())
	{
		cout << "This file is opened" << endl;
		cout << "-------------------------" << endl;
		cout << "Enter number of student : ";
		cin >> num;
		for(int i=0;i<num;i++)
		{
			cout << "Enter Name " << i+1 << ": " ;
			cin >> name;
			cout << "Enter Score " << i+1 << ": " ;
			cin >> score;
			OutFile <<name << " " << score << " " << endl;
		}
	}
	else
	{
		cout << "This file is not opened" << endl;
	}
	OutFile.close();
	InFile.open("Grade.dat"); //เปิดอ่าน
	if(InFile.is_open())
	{
		cout << endl;
		cout << "Show data from file" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Name" << "\t" << "Score" << "\t" << "Grade" << endl;
		cout << "-------------------------------------------" << endl;
 		while(InFile >> name >> score)
		{
			if(score >= 80)grade = 'A';
			else if(score >= 70)grade = 'B';
			else if(score >= 60)grade = 'C';
			else if(score >= 50)grade = 'D';
			else if(score < 50)grade = 'F';
			cout << name << "\t" << score << "\t" << grade << endl;
		}
		cout << "------------------------------------------" << endl;
	}
	else
	{
		cout << "This file is not opened" << endl;
	}
	InFile.close();
		
	return 0;
}