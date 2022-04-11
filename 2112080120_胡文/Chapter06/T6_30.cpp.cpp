/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

int reserve(int x)
{
   int num=0;
   while(x!=0){
    num=num*10+x%10;
    x=x/10;
   }
   return num;
}

int main()
{
    int x;
    cin>>x;
    cout<<reserve(x);
    return 0;
}
