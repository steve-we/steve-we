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
    double a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
