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
    unsigned int count;
    for(count=1; count<=10; ++count)
    {
        if(count!=5)
    cout<<count<<" ";

    if(count==5)
    count=11;

    }

    cout<<"\n broke out of loop at count = "<<count<<endl;
    return 0;
}
