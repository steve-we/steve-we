#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b=10;
    cin >> a;
    if(a<=40)
        cout << fixed << setprecision(2) << a*b << endl;
    else
        cout << fixed << setprecision(2) << 40*b+(a-40)*b*3/2 << endl;
    return 0;
}
