#include<iostream>
using namespace std;
int main()
{
  int rp=4;
  bool xx=rp==2; // will print 0 or 1 acording to the condition
  cout<<xx<<endl;
   

   cout<<"Type Casting"<<endl;
   int a;
   char c='A';
   a=c; //here the character [A] is stored in 'a' variable as an interger 
   cout<<a<<endl; // it ill print the character [A] as an integer which is 65[ASCII value] 
   // it is know as Typecasting[means storing one type of data(datatyepe) into another type of data(datatyepe) ]

   int b=66;
   char ch;
   ch=b; 
   cout<<ch<<endl;
   

  int package;
  cout<<"Enter the package that is offered  to you: ";
  cin>>package;
  if(package>10)
  {
    cout<<"Accepted"<<endl;
  }
  else
  cout<<"Rejected"<<endl;

  int marks;
  cout<<"Enter your marks: ";
  cin>>marks;
  if(marks>33)
  cout<<"Pass"<<endl;
  else
  cout<<"Fail"<<endl;

}