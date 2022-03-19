/*
 Filename:
 Author:Hu Wen
 Time:Mar 19,2022
 Function:
 */
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			if(i==1||i==3||i==5||i==7){
				cout<<"*"<<" ";
			}
			if(i==2||i==4||i==6||i==8){
				cout<<" "<<"*";
			}
		}
		cout<<endl;
	}
    return 0;
}
