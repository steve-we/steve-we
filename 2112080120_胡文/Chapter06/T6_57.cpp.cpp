/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include <stdlib.h>
#include <string>
#define RAND_MAX 0x7fff
using namespace std;

int main()
{
    int rand(void);
    int a,b;
    a=rand()%10;
    b=rand()%10;
    cout << "How much is " << a << " times " << b << "?" << endl;
    int c,d;
    c=a*b;
    cin >> d;
    for(;d!=c;)
    {
        if(d==c)
            cout << "Very good!" << endl;
        else
            cout << "No. Please try again." << endl;
        cin >> d;
    }
     cout << "Very good!" << endl;


    return 0;
}
