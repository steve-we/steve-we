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
    for(int a=1;a<=500;a++){
		for(int b=1;b<=500;b++){
			for(int c=1;c<=500;c++){
				if(a*a+b*b==c*c) cout<<a<<","<<b<<","<<c<<endl;
			}
		}
	}
    return 0;
}
