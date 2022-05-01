/*
 Filename:
 Author:Hu Wen
 Time:Apr 29, 2022
 Function:
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,11>x= {0};
    int a,b,c;
    srand(time(0));
    for(int i=1; i<=36000; i++)
    {
        a=rand(  )%6+1;
        b=rand(  )%6+1;
        c=a+b;
        x[c-2]++;
    }
    cout<<"add"<<"\t"<<" : "<<"times"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<i+2<<"\t"<<" : "<<x[i]<<endl;
    }
    if(x[5]>5800&&x[5]<6300)
        cout<<"true!"<<endl;
    else
        cout<<"false!"<<endl;

    return 0;
}

