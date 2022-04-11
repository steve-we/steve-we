/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;


int iseven(int x){
    if(x%2==0) return 1;
    else return 0;
}

int main()
{
    int x,y;
    cout<<"please input x.  when x is zero, over.";
    cin>>x;
    while(x!=0){

    if(iseven(x)==1) cout<<"ture";
    else cout<<"false";

    cin>>x;
    }
    return 0;
}
