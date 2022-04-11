/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include <cmath>
using namespace std;

int primenumber(){
    int num=0;
   for(int i=2;i<=10000;i++){
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0) num++;
    }
    if(num==0) cout<<i<<"\t";
    num=0;
   }

}

int main()
{
    cout<<"2-10000之间的素数"<<endl;
    cout<<primenumber()<<endl<<endl;
    cout<<"如果n%x!=0,则n/x也不是n的因数，所以只需要进行n的平方根次判断"<<endl;

}

