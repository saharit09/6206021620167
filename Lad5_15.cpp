#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Define prototype function
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Widht);
float Area(const int Length, const int Widht, const int height);
float Area(const double based1, const double based2, const double height);
int main()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice;
		if (Choice == '1') {
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2') {
			float Length,Widht;
			cout << "Enter length and width : ";
			cin >> Length >> Widht;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length,Widht);
			cout << endl;
		}
		else if (Choice == '3') {
			float Length,Widht,height;
			cout << "Enter Length and Widht and height : ";
			cin >> Widht >> Length >> height;
			cout << "Area of Capacity = " << fixed;
			cout << setprecision(2) << Area(Length,Widht,height);
			cout << endl;
		}
		else if (Choice == '4') {
			float based1,based2,height;
			cout << "Enter based1 and based2 and height : ";
			cin >> based1 >> based2 >> height;
			cout << "Area of Trapezium = " << fixed;
			cout << setprecision(2) << Area(based1,based2,height);
			cout << endl;
		}
		else if (Choice == '5') Flag = false;
		else {
			cout << "\nYou choose out of range is ";
			cout << "not process.\n";
		}
	} while (Flag);
	cout << "\n . . . Exit Program . . .\n";
	return(0);
}
float Area(const float Radius)
{
return(3.14159F * Radius * Radius);
}
float Area(const float Length, const float Widht)
{
return(Length * Widht);
}
float Area(const int Length, const int Widht, const int height)
{
return(Widht * Length * height);
}
float Area(const double based1, const double based2, const double height)
{
return(based1 + based2 * 0.5 * height);
}
void DisplayMenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Capacity" << endl;
	cout << " 4. Trapezium" << endl;
	cout << " 5. Exit" << endl;
	cout << "Enter your choose number: ";
}