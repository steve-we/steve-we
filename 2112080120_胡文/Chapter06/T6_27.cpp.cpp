/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

double little(double x,double y,double z){
   double num;
   if(x<y) num=x;
   else num=y;
   if(num<z) num=num;
   else num=z;
   return num;
}

int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    cout<<"the min:"<<little(x,y,z);
    return 0;
}
