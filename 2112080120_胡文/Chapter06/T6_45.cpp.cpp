#include<iostream>
using namespace std;
int mystery(int,double);
int main()
{
  int x=0;
  double y=0;
  cout<<"Enter two integers:";
  cin>>x>>y;
  cout<<"The result is "<<mystery(x,y)<<endl;

}
int mystery(int a,double b)
{
    if(1==b)
    return a;
    else
        return a+mystery(a,b-1);

}
