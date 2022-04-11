#include<iostream>
using namespace std;

int minimum(int,int);
int main()
{
   int x,y;
   cin>>x>>y;
   cout<<"¨o§à§á¨U§Ø¨g§ß¨]"<<minimum(x,y)<<endl;
}
int minimum(int a,int b)
{
  if(a>b)
        return b;
  else
    return a;
}
