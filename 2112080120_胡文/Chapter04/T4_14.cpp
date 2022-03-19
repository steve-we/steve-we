#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << "Enter account number : " << a;
    cout << "Enter beginning balance : " << b;
    cout << "Enter total charges : " << c;
    cout << "Enter total credits : " << d;
    cout << "Enter credit limit : " << e;
    while((b+c-d)>e)
    {
        cout << "New balance is " << b+c-d << endl;
    }
    cout << "New balance is " << b+c-d << endl;
    cout << "Account : " << a << endl;
    cout << "Credit limit : " << e << endl;
    cout << "Balance : " << b+d << endl;
    cout << "Credit Limit Exceeded." << endl;
    return 0;
}
