/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

int isperfect(){
    int num=0;
   for(int i=1;i<=1000;i++){
    for(int j=1;j<i;j++){
        if(i%j==0) num=num+j;
    }
    if(num==i) cout<<i<<endl;
    num=0;
   }
   return 0;
}

int main()
{
    cout<<"1-1000之间的完数"<<endl;
    cout<<isperfect();
    return 0;
}
