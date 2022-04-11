/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

int main()
{
    cout<<"please input the time";
    double a,b,c;
    cin>>a>>b>>c;
    cout<<"car"<<"\t"<<"hour"<<"\t"<<"charge"<<endl;
    double x,y,z;
    if(a<=3.0) x=2.0;
    else x=2.0+0.5*(a-3.0);
    if(b<=3.0) y=2.0;
    else y=2.0+0.5*(b-3.0);
    if(c<=3.0) z=2.0;
    else z=2.0+0.5*(c-3.0);
    if(x>10.0) x=10.0;
    if(y>10.0) y=10.0;
    if(z>10.0) z=10.0;
    cout<<"1"<<"\t"<<a<<"\t"<<x<<endl;
    cout<<"2"<<"\t"<<b<<"\t"<<y<<endl;
    cout<<"3"<<"\t"<<c<<"\t"<<z<<endl;
    cout<<"total"<<"\t"<<a+b+c<<"\t"<<x+y+z;
    return 0;
}
