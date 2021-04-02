#include <iostream>
using namespace std;
int main()
{
	int score[5][2];
	for(int i=0;i<5;i++)
		for(int j=0;j<2;j++)
		{
			cout << "Enter score [" << i << "][" << j << "] :";
			cin >> score[i][j];
		}
	cout << "---------Display score---------" << endl;
	cout << "Math \t End " << endl;
	for(int i=0;i<5;i++)
	{
		cout << endl;
		for(int j=0;j<2;j++)
		
			cout << score[i][j] << " "; 
	}
		cout << endl;
	return 0;
}