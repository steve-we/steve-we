/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;


int why(int side){
    for(int i=1;i<=side;i++){
        for(int j=1;j<=side;j++){
             if(j<=side) cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int main()
{
    int side;
    cout<<"please input the side:";
    cin>>side;
    why(side);
    return 0;
}
