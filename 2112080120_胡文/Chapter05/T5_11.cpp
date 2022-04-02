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
    for(int i=1;i<=10;i++)
    {
        int a=i;
        while(a>=1)
        {
            cout << "*";
            a--;
        }
        cout << endl;
    }
    cout << endl;

    for(int i=10;i>=1;i--)
    {
        int a=i;
        while(a>=1)
        {
            cout << "*";
            a--;
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1;i<=10;i++)
    {
        for(int a=1;a<=10;a++)
        {
            int b=i;
            if(b>a)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1;i<=10;i++)
    {
        for(int a=10;a>=1;a--)
        {
            int b=i;
            if(b<a)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            b++;
        }
        cout << endl;
    }
    return 0;
}
