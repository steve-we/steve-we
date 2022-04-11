/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>

using namespace std;

int main()
{
    long int len=0,k,m,i,l,j;

    for(i=1;i<=32767;i++){
            k=i;
            m=i;
        while(m!=0){
            m=m/10;
            len++;
        }
        int a[len];
        for(j=0;j<len;j++){

                a[j]=k%10;
                k=k/10;

        }
        cout<<i<<":";
            for(l=(len-1);l>=0;l--){
            cout<<a[l]<<"  ";
            }
        len=0;
        cout<<endl;
    }
    return 0;
}
