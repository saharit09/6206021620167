#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n1, n2;
	cout << "Enter string :: ";
	cin >> n1;
	cout << "Enter Substring :: ";
	cin >> n2;
	cout << "The substring [" << n2 << "] is present at position [" << n1.find(n2) << "]\n";
	cout << "string 1 =" << n1.substr(0,n1.find(n2)+1) << endl;
	cout << "string 2 =" << n1.substr(n1.find(n2)+1,n1.length()) << endl;

	return 0;
}