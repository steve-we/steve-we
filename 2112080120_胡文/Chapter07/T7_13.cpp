/*
 Filename:
 Author:Hu Wen
 Time:Apr 29, 2022
 Function:
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int ,20> a={0};
    int b=20;
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                i--;
                b--;
            }
        }
    }
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
