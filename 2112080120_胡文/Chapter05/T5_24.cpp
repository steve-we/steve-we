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
    int i,j,k,m=1,x;
    cin>>x;
    int n=(x-1)/2;
    for(i=1; i<=(x-1)/2+1; i++)
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
    m=m-4;
    for(i=1; i<=(x-1)/2; i++)
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
