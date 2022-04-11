#include <iostream>

#include <math.h>

using namespace std;

double distance(double a,double b,double c,double d);

int main ()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<distance(x1,y1,x2,y2)<<endl;
    return 0;
}
double distance(double a,double b,double c,double d)
{
return sqrt((c-a)*(c-a)+(d-b)*(d-b));
}
