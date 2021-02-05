#include <iostream>
using namespace std;
void cal_bmi(float, int);
int main()
{
	float w;
	int h;
	cout << "Enter Weight : ";
	cin >> w;
	cout << "Enter Height : ";
	cin >> h;
	cal_bmi(w,h);
	return 0;
}
void cal_bmi(float w, int h)
{
	float h_m = (float)h/100;
	float bmi = w/(h_m*h_m);
	cout << "Your BMI = " << bmi << endl;
	if(bmi < 18.5 ) cout << "Underweight";
	else if((bmi >= 18.5) && (bmi <= 24.9)) cout << "Normal";
	else if((bmi >= 25) && (bmi <= 29.9)) cout << "Overweight";
	else cout << "Obese";
	
	cout << endl;
}
