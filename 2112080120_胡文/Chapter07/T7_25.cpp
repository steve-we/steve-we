/*
 Filename:
 Author:Hu Wen
 Time:Apr 29 ,2022
 Function:
 */
#include<iostream>
#include<stdlib.h>
using namespace std;

static int *x;
static int sum;
int check(int k){
    for(int i=0;i<k;i++)
        if (x[i]==x[k] || abs(x[i]-x[k]) ==abs(i-k))
           return 1;

        return 0;

}
void queen(int n){

     int k = 0;
     sum = 0;

    while(k>=0){
        x[k]++;
        while(x[k]<n && check(k) == 1)

          x[k]++;

        if(x[k]<n && k == n-1)
        {

          for(int i =0;i<n;i++)
           cout<<x[i]+1<<" ";
           cout<<endl;
           sum++;

        }
        if(x[k]<n && k<n-1)

           k++;

        else
        {

           x[k]=-1;
           k--;

        }

    }
    if(sum == 0)
        cout<<"无解"<<endl;
}
int main(){

    int n =8;
    x = new int[n+1];
    for(int i=0;i<n;i++){
        x[i] = -1;
    }

    queen(n);
    cout<<"一共解的个数为 ："<<sum<<endl;
    return 0;
}
