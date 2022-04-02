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
    double a,ip=0;
	for(a=1;a<=1000;a++){
		double c=1;
		int d=1,b=1;
		while(d<=a){
		ip=ip+c*4/b;
		c=c*(-1);
		b=b+2;
		d++;
		}
		cout<<a<<": "<<ip<<"\t";
	}
    return 0;
}
