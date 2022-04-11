/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;


int multiple(int x,int y){
    if(y%x==0) return 1;
    else return 0;
}

int main()
{
    int x,y;
    cout<<"please input x,y.  when x or y is zero, over.";
    cin>>x>>y;
    while(x!=0&&y!=0){

    if(multiple(x,y)==1) cout<<"ture";
    else cout<<"false";

    cin>>x>>y;
    }
    return 0;
}
