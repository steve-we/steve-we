/*
 Filename:
 Author:Hu Wen
 Time:Apr 29, 2022
 Function:
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int b=20,c;
    for(int i=0;i<b;i++)
    {
        cin>>c;
        a.push_back(c);

    }
    a.erase(unique(a.begin(),a.end()),a.end());
    b=a.size();
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
