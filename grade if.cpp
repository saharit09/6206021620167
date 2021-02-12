#include <iostream>
using namespace std;
void check_grade(int);
int main()
{
	int choice;
	cout << "1 80-100\n2 75-79\n3 70-74\n4 65-69\n5 60-64\n";
	cout << "6 55-59\n7 50-54\n8 0-49\n9 Exit\n";
	cout << "Please select choice : ";
	cin >> choice;
	check_grade(choice);
	
	return 0;
}
void check_grade (int choice)
{
	switch (choice)
	{
		case 1 : cout << "Your score is range <80-100>" << endl;
		           cout << "The student grade is : 4.00" << endl;
		           break;
		case 2 : cout << "Your score is range <75-79>" << endl;
		           cout << "The student grade is : 3.5" << endl;
		           break;
		case 3 : cout << "Your score is range <70-74>" << endl;
		           cout << "The student grade is : 3.00" << endl;
		           break;
		case 4 : cout << "Your score is range <65-69>" << endl;
		           cout << "The student grade is : 2.5" << endl;
		           break;
		case 5 : cout << "Your score is range <60-64>" << endl;
		           cout << "The student grade is : 2.00" << endl;
		           break;	
		case 6 : cout << "Your score is range <55-59>" << endl;
		           cout << "The student grade is : 1.5" << endl;
		           break;
		case 7 : cout << "Your score is range <50-54>" << endl;
		           cout << "The student grade is : 1.00" << endl;
		           break;
		case 8 : cout << "Your score is range <0-49>" << endl;
		           cout << "The student grade is : 0" << endl;
		           break;	
		case 9 : break;	
		default : cout << "Your menu is wrong.";
			   	   		   		   	 		   		              
	}
}
