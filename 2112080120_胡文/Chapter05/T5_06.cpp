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
    int a,i,num=0;
    double average;
    cin >> a;
    for(i=0;a!=9999;i++)
    {
        num+=a;
        cin >> a;
    }
    average=num/i;
    cout << " " << average << endl;

    return 0;
}
