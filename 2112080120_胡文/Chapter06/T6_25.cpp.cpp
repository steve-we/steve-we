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
    cout<<"please input Сʱ���֣���";
    double x,y,z;
    cin>>x>>y>>z;
    cout <<"�����ϴ�����12���ӹ���"<<hahah(x,y,z)<<"��"<<endl;
    cout<<"����ʮ��Сʱ��֮���ʱ��������"<<12*60*60<<"��";

    return 0;
}
