#include<iostream>
#include<string>
using namespace std;
void calprice (float price[3][5])
{
	for(int i=0;i<5;i++)
	{
			price[1][i]=price[0][i]*0.07;
			price[2][i]=price[0][i]+price[1][i];
			
	}
	
}
void display(string name[5] , float price[3][5] )
{
	cout<<"No.\tProduct Name\tPrice\tVat7%\tNet\n";
	for(int i=0;i<5;i++)
	{

		cout<<i+1<<'\t'<<name[i]<<'\t'<<'\t'<<price[0][i]<<'\t'<<price[1][i]<<'\t'<<price[2][i]<<endl;
	}

}

int main()
{  
	  
	   string name[5];
	   float price[3][5];
	   for ( int i = 0; i < 5; i++) 
	   {
		   cout<<"Enter Product Name : ";
		   cin>>name[i];
		   cout<<"	Price : ";
		   cin>>price[0][i];
	   }
	   calprice(price);
	   display(name,price);
	   return 0;
}
