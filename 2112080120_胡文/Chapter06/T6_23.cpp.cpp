/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;


int why(int side,char fillcharacter){
    for(int i=1;i<=side;i++){
        for(int j=1;j<=side;j++){
             if(j<=side) cout<<char(fillcharacter);
        }
        cout<<endl;
    }
    return 0;
}

int main()
{
    int side;
    char fillcharacter;
    cout<<"please input the side and fillcharacter:";

    cin>>side;
    cin>>fillcharacter;
    why(side,fillcharacter);
    return 0;
}

