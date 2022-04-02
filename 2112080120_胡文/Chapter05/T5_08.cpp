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
    int n,sum;
    cin >> n;
    sum=n;
    for(int i=1;i<n-1;i++)
    {
        int a;
        cin >> a;
        if(sum>a)
            sum=a;
        else
            cin >> a;
    }
    cout << " " << sum << endl;
    return 0;
}
