#include<iostream>
#include<string>
using namespace std;
void func_avg(int score[5][2]);
void display(int score[5][2],string name[5]);
int main()
{  
	int score[5][2];
	string name[5];
	for(int i=0;i<5;i++)
	{   
		cout<<"Enter Name ["<<i<<"] : ";
		cin>>name[i];
		for(int j=0;j<2;j++)
		{  
			cout<<"Enter score ["<<i<<"]["<<j<<"] : ";
			cin>>score[i][j];
		}
	}
   display(score,name);
   func_avg(score);

   return 0;
}
void display(int score[5][2],string name[5])
{	
	cout<<"----Display score---- "<<endl;
	cout<<"Name \tMath \tEng "<<endl;
	for(int i=0;i<5;i++)
	{  
		cout<<name[i]<<"\t";
		for(int j=0;j<2;j++)
		{  
			cout<<score[i][j]<<"\t";

		}
	cout<<endl;
	}
}
void func_avg(int score[5][2])
{	
	cout<<"--------------------------"<<endl;
	cout<<"Sum";
	int sum[2];
	for(int i=0;i<2;i++)
	{ 
		sum[i] =0;
		for(int j=0;j<5;j++)
	   {
		   sum[i] = sum[i]+score[j][i];
	   }
	 cout<<"\t"<<sum[i];
	}
	cout<<"\nAvg \t"<<(float)sum[0]/5<<"\t"<<(float)sum[1]/5<<endl;
	cout<<endl;
}