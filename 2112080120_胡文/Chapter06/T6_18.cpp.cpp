/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

int integerpower(int base,int exponent){
    int x=1;
    for(int i=1;i<=exponent;i++){
        x=x*base;
    }
return x;
}
int main()
{
    int base,exponent;
    cin>>base>>exponent;
    cout <<integerpower(base,exponent)<< endl;
    return 0;
}
