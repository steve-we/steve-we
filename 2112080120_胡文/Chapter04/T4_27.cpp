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
    int a,c;
	cin>>a;
	c=a;
	int sum=0;
	while(c>0){
		sum=sum*2+c%10;
		c=c/10;
	}
	cout<<sum;

    return 0;
}
