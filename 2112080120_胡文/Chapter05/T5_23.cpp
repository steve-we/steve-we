/*
 Filename;
 Author;Hu wen
 Date;Apr 2, 2022
 Function:
 */
#include <iostream>
#include <math.h>

#include <iomanip>

using namespace std;

int main ()
{
    int i,j,k,n=4,m=1;
    for(i=1; i<=5; i++)
    {

        for(j=1; j<=n; j++)
        {
            cout<<" ";
        }
        for(k=1; k<=m; k=k+1)
        {
            cout<<"*";
        }
        m=m+2;
        for(j=1; j<=n; j++)
        {
            cout<<" ";
        }
        n--;
        cout<<endl;

    }
    n=1;
    m=7;
    for(i=1; i<=4; i++)
    {

        for(j=1; j<=n; j++)
        {
            cout<<" ";
        }
        for(k=1; k<=m; k=k+1)
        {
            cout<<"*";
        }
        m=m-2;
        for(j=1; j<=n; j++)
        {
            cout<<" ";
        }
        n++;
        cout<<endl;

    }

    return 0;
}
