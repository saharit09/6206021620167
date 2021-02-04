#include <iostream>
using namespace std;
int main()
{
int q1,q2,q3,mid,final ;
cout << "========== QUIZZES =========== :"<<endl;
cout << "Enter first quizz (10)  :";
cin>> q1 ;
cout << "Enter second quizz (10) :";
cin>> q2 ;
cout << "Enter third quizz (10)  :";
cin>> q3 ;
cout << "========== MID-TERM =========== :"<<endl;
cout << "Enter mid-term (40) :";
cin>> mid ;
cout << "========== FINAL =========== :"<<endl;
cout << "Enter final (50) :";
cin>> final ;
cout << "Quizz Total :"<<(float)(q1+q2+q3)/3<<endl;
cout << "Mid term :"<<mid<<endl;
cout << "Final :"<<final<<endl;
float total =(float)(q1+q2+q3)/3+mid+final ;
cout << "Total :"<<total<<endl;
cout<<"Your score is : "<<((total >= 50) ? "PASS " : "FAILED ")<<endl;
return(0);
}
