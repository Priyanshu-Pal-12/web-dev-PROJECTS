#include<iostream>
using namespace std;
int main()
{
  cout<<"Fibonacci series\n";
  int sum=0;
  int n1=0;
  int n2=1;
  cout<<n1<<" "<<n2<<" ";
  for(int i=0;i<10;i++)
  {
    sum=n1+n2;
    cout<<sum<<" ";
    n1=n2;
    n2=sum;
  }
}