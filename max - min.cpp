#include <iostream>
using namespace std;
int main()
{
	float height1, height2, height3, max, min;
	cout << "Enter first student's height(cm.) : ";
	cin >> height1;
	cout << "Enter first student's height(cm.) : ";
	cin >> height2;
	cout << "Enter first student's height(cm.) : ";
	cin >> height3;
	
	max = height1;
	if(height1>max) max = height2;
	if(height2>max) max = height3;
	
	min = height1;
	if(height1<min) min = height2;
	if(height2<min) min = height3;
	
	cout << "Maximum height is " << max << ".cm" << endl;
	cout << "Minimum height is " << min << ".cm" << endl;
	return 0;
}
