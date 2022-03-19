/*
 Filename:
 Author:Hu Wen
 Time:Mar 19,2022
 Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"\n";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0||i==m-1)
            {
                cout<<"* ";
            }
            else
                if(j==0||j==m-1)
                {
                    cout<<"* ";
                }
                else
                    cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
