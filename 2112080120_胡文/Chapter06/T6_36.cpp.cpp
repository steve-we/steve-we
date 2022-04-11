#include <iostream>

using namespace std;

int power(int base , unsigned int exponent);

int main ()
{
    int x,y;
    cin>>x>>y;
    cout<<power(x,y)<<endl;
    return 0;
}
int power(int base , unsigned int exponent)
{
    if(exponent==1)
    return base;
    else
    return power(base,exponent-1)*base;
}
