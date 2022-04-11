/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double x,double y){
    double z;
    z=sqrt(x*x+y*y);
return z;
}
int main()
{
    double x,y;
    cout<<"please input the length1 and length2";
    cin>>x>>y;
    cout<<"±ß1"<<"\t"<<"±ß2"<<endl;
    cout<<x<<"\t"<<y<<endl;
    cout<<"Ð±±ß"<<hypotenuse(x,y);
    return 0;
}
