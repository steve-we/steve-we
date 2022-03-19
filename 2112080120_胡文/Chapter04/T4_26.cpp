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
    int a;
    cin >> a;
    if(a/10000%10==a%10 && a/1000%10==a/10%10)
        cout << "Yes" << endl;
    else
    cout << "No" << endl;
    return 0;
}
