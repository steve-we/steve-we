/*

 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,i=0,j=0;
    cin >> a >> b;
    while(a>0 && b>0)
    {
        cout << fixed << setprecision(6) << a/b << endl;
        i=i+a;
        j=j+b;
        cin >> a >> b;

    }
    cout << fixed << setprecision(6) << i/j << endl;
    return 0;
}
