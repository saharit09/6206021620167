#include <iostream>
using namespace std;
int main()
{
	char choice = 'G';
	switch (choice)
	{
		case 'R' : cout << "RED"; break;
		case 'W' : cout << "WHITE"; break;
		case 'B' : cout << "BLUE"; break;
		case 'G' : cout << "GREEN"; break;
		default  : cout << "I don't know.";
	}
	cout << "The end." << endl;
	return 0;
}
