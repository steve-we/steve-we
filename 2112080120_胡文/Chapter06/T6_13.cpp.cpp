/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double x;
    int y;
    cout<<"please input x,if it is zero,will over.";
    cin>>x;
    while(x!=0)
    {
    y=floor(x+0.5);
    cout<<"原数值"<<"\t"<<"近似值"<<endl;
    cout <<x<<"\t"<<y<<endl;
    cin>>x;
    }
    return 0;
}
