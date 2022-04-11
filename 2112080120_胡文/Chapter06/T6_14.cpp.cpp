/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

//double roundtointeger( );
//double roundtotenths( );
//double roundtohundredths( );
//double roundtothousandths( );
double roundtointeger(double x)
{
    double y;
    y=floor(x+0.5);
    return y;
}


double roundtotenths(double x)
{
    double y;
    y=floor(x*10.0+0.5)/10.0;
    return y;
}

double roundtohundredths(double x)
{
    double y;
    y=floor(x*100.0+0.5)/100.0;
    return y;
}

double roundtothousandths(double x)
{
    double y;
    y=floor(x*1000.0+0.5)/1000.0;
    return y;
}
int main()
{
    double x;
    cout<<"please input the number,when number is zero,over";
    cin>>x;
    while(x!=0){
    cout <<roundtointeger(x)<< endl;
    cout <<roundtotenths(x)<< endl;
    cout <<roundtohundredths(x)<<endl;
    cout <<roundtothousandths(x)<<endl;
    cin>>x;
    }
    return 0;
}
