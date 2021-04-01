#include <iostream>
#include <string>
using namespace std;
void ListStudent(string name[50],int score[50],int);
char Calgrade(int score[50],int);
int main()
{	  
	  int num;
	  string name[50];
	  int score[50];
	  cout<<"Enter number of Students : ";
	  cin>>num;
	  for(int i=0;i<num;i++)
	  {  
		 cout<<"Input Name : " ;
		 cin>>name[i];
		 cout<<"Input score " <<i+1<< ": " ;
		 cin>>score[i];
	  }
	  ListStudent(name,score,num);
	  return 0;
}
void ListStudent(string name[50],int score[50],int num)
{
	 for(int i=0;i<num;i++)
	 {
		 cout<<"Student Name : "<<name[i]<<"  Score "<<i+1<<" = "<<score[i]<<" Your grade is "<<Calgrade(score,i)<<endl;

	 }
}
char Calgrade(int score[],int i)
{
	if(score[i]>79)return 'A';
	else if (score[i] >69)return 'B';
	else if (score[i] >59)return 'C';
	else if (score[i] >49)return 'D';
	return 'F';
	
}