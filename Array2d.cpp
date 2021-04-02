#include<iostream>

using namespace std;

void func_avg(int score[5][2]);

void display(int score[5][2]);




int main()

{  int score[5][2];

   for(int i=0;i<5;i++)

   {   for(int j=0;j<2;j++)

	   {  cout<<"Enter score ["<<i<<"]["<<j<<"] : ";

		  cin>>score[i][j];

	   }

   }

   display(score);

   func_avg(score);

   return 0;

}

void display(int score[5][2])

{	cout<<"----Display score---- "<<endl;

	cout<<"\tMath \tEng "<<endl;

	for(int i=0;i<5;i++)

	{  cout<<"\t";

		for(int j=0;j<2;j++)

	   {  cout<<score[i][j]<<"\t";

	   }

	cout<<endl;

	}

}

void func_avg(int score[5][2])

{	cout<<"--------------------------"<<endl;

	cout<<"Sum";

	int sum[2];

	for(int i=0;i<2;i++)

	{  sum[i] =0;

		for(int j=0;j<5;j++)

	   {  sum[i] = sum[i]+score[j][i];

	   }

	 cout<<"\t"<<sum[i];

	}

	cout<<"\nAvg "<<(float)sum[0]/5<<"\t"<<(float)sum[1]/5<<endl;




	cout<<endl;

}