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
    cout<<"2-10000֮�������"<<endl;
    cout<<primenumber()<<endl<<endl;
    cout<<"���n%x!=0,��n/xҲ����n������������ֻ��Ҫ����n��ƽ�������ж�"<<endl;

}

