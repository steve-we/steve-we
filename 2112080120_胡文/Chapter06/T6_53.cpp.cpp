#include<iostream>
using namespace std;

int maximum(int,int);
int main()
{
   int x,y;
   cin>>x>>y;
   cout<<"�ϴ�ֵΪ"<<maximum(x,y)<<endl;
}
int maximum(int a,int b)
{
  if(a<b)
        return b;
  else
    return a;
}
