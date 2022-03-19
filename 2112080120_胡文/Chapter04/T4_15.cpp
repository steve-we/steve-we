#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a=200,b,c;
    cin >> b;
    while(b>0)
    {
       cout << fixed << setprecision(2) << a+b*0.09 << endl;
       b=0;
    }

    return 0;
}
