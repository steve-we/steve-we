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
    int a,b=1;
    while(b<=5)
    {
        cin >> a;
        for(int i=1;i<=a;i++)
        {
            cout << "*";
        }
        b++;
    }
    return 0;
}
