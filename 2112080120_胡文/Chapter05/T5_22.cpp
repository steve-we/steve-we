/*
 Filename;
 Author;Hu wen
 Date;Apr 2, 2022
 Function:
 */
#include <iostream>

using namespace std;

int main()
{
    {
	int x,y,a,b,j,i,l,k;
	cout<<"please input x,y";
	cin>>x>>y;
	if(!(x<5)&&!(y>=7)) l=1;
	else l=0;
	if(!(x<5||y>=7)) k=1;
	else k=0;
	if(j==k) cout<<"a:"<<"yes"<<endl;
	else cout<<"a:"<<"no";


	cout<<"please input a,b,g";
	int g;
	cin>>a>>b>>g;
	if(!(a==b)||!(g!=5)) l=1;
	else l=0;
	if(!((a==b)&&(g!=5))) k=1;
	else k=0;
	if(j==k) cout<<"b:"<<"yes"<<endl;
	else cout<<"b:"<<"no";



	cout<<"please input x,y";
	cin>>x>>y;
	if(!((x<=8)&&(y>4))) l=1;
	else l=0;
	if(!(x<=8)||!(y>4)) k=1;
	else k=0;
	if(j==k) cout<<"c:"<<"yes"<<endl;
	else cout<<"c:"<<"no";



	cout<<"please input i,j";
	cin>>i>>j;
	if(!((i>4)||(j<=6))) l=1;
	else l=0;
	if(!(i>4)&&!(j<=6)) k=1;
	else k=0;
	if(j==k) cout<<"d:"<<"yes"<<endl;
	else cout<<"d:"<<"no";
    }
    return 0;
}
