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
    int i,a=1;
    for(i=1;i<=5;i++)
    {
        int b=i;
        while(b>=1)
        {
            a=a*b;
            b--;
        }
        cout << i << "\t" << a << endl;
        a=1;
    }
    return 0;
}
