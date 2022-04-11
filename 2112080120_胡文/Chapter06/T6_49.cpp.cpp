#include<iostream>
using namespace std;

 inline double circleArea(double);

int main()
{
  double x;
  cin>>x;
  cout <<"circleArea is"<<circleArea(x);
}
inline double circleArea(double a)
{

    a=3.14*a*a;
    return a;
}
