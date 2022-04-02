/*
 Filename;
 Author;Hu wen
 Date;Apr 2, 2022
 Function:
 */
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout<<"十进制"<<"\t    "<<"二进制"<<"\t    "<<"八进制"<<"\t"<<"十六进制"<<endl;
    for(int i=1;i<=256;i++)
       {
           cout<<dec<<i<<"\t    "<<bitset<9>(i)<<"\t    "<<oct<<i<<"\t        "<<hex<<i<<endl;
       }
    return 0;
}
