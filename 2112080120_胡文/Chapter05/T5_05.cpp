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
    int n,num=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        num +=a;
    }
    cout << " " << num << endl;
    return 0;
}
