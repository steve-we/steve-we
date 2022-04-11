/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

double hahah(double x,double y,double z){
    double num;
    if(x<=12){
    num=x*60.0*60.0+y*60.0+z;
    }
    else {
        num=(x-12)*60.0*60.0+y*60.0+z;
    }
    return num;
}

int main()
{
    cout<<"please input 小时，分，秒";
    double x,y,z;
    cin>>x>>y>>z;
    cout <<"距离上次敲响12点钟过了"<<hahah(x,y,z)<<"秒"<<endl;
    cout<<"两个十二小时制之间的时间秒数是"<<12*60*60<<"秒";

    return 0;
}
