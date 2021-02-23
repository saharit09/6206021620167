#include <iostream>
#include <string>
void check_bmi(float);
using namespace std;
int main()
{
	int num, weight, height, bmi;
	string name;
	
	cout << "Enter Number of round : ";
	cin >> num;
	cout << "-------------------------------------\n";
	for(int i=1;i<=num;i++)
	{
		cout << "Enter Name " << i << ": ";
		cin >> name;
		cout << "Enter Weight " << i << ": ";
		cin >> weight;
		cout << "Enter Height " << i << ": ";
		cin >> height;
		float h = (float)height/100;
		float bmi = 41;
		cout << "BMI " << i << ": " << bmi << endl;
		check_bmi(bmi);
		cout << "----------------------------------\n";
	}
	return 0;
}
void check_bmi(float bmi)
{
	if(bmi < 16) cout << "Your Category of BMI is : Severe Thinness\n";
	else if(bmi>=16 && bmi<=17) cout << "Your Category of BMI is : Moderate Thinness\n";
	else if(bmi>=17 && bmi<=18.5) cout << "Your Category of BMI is : Mild Thinness\n";
	else if(bmi>=18.5 && bmi<=25) cout << "Your Category of BMI is : Normal\n";
	else if(bmi>=25 && bmi<=30) cout << "Your Category of BMI is : Overweight\n";
	else if(bmi>=30 && bmi<=35) cout << "Your Category of BMI is : Obese Class |\n";
	else if(bmi>=35 && bmi<=40) cout << "Your Category of BMI is : Obese Class ||\n";
	else cout << "Your Category of BMI is : Obese Class |||\n";
	
}
