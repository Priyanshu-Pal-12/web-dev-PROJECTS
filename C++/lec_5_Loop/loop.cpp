#include<iostream>
using namespace std;
int main()
{
  for(int i=65;i<=90;i++)  //this loop will print the capital alphabets 
  {
    char p=i;
    cout<<p<<" ";
  }

  cout<<endl;
  //printing small alphabets using character variable
  char name;
  for(name='a';name<='z';name++)
  {
    cout<<name<<" ";
  }

  cout<<endl;
  //printing the table
  int p=1;
  for(int i=6;i<=60;i=i+6 )
  {
    cout<<"6 x "<<p<<" = "<<i<<endl;
    p++;
  }
  cout<<endl;
  int number;
  cout<<"Enter the number: ";
  cin>>number;
  for(int i=1;i<=10;i++)
  {
    cout<<number<<" x "<<i<<" = "<<number*i<<endl;
  }

  cout<<endl;
  int number1=5;
  for(int i=1;i<4;i++)
  {
    number1=number1*5;
  }
    cout<<number1;
  
}
