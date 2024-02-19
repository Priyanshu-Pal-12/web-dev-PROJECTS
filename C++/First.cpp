#include<iostream>
using namespace std;
int main()
{
  // charcater takes 1byte [8bits]
  char p='p';
  cout<<p<<endl;
  // priyanshu pal
  //hello

  //variable take 4bytes [lbytes=8bits] it takes 32bits
  int a=10, b=20, c=30, d=40;
  cout<<a+b+c+d<<endl;

  //float takes 4bytes [32bits]
  float pp=2.31;
  cout<<pp<<endl;

  //double takes 8bytes [64bits]ii
  double dd=3.125647;
  cout<<dd<<endl;

  //boolean takes 1byte [8bits] here false=0 and true=1
  bool bo=true;
  cout<<bo<<endl;

  int rp=4;
  bool xx=rp==2; // will print 0 or 1 acording to the condition
  cout<<xx;
}
