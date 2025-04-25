#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int num1,num2;
 cout << "Enter two numbers = ";
 cin>>num1>>num2 ;

 int sum= num1+num2;
 cout << "Sum is = " <<sum ;
 cout<<endl;

 int sub= num1-num2;
 cout << "Subtraction is = " <<sub ;
 cout<<endl;

 int mul= num1*num2;
 cout << "Multiplicatin is = " <<mul ;
 cout<<endl;

 int div= num1/num2;
 cout << "Division is = " <<div ;
 cout<<endl;

 int rem= num1%num2;
 cout << "Reminder is = " <<rem ;
 cout<<endl;


 getch();
}
