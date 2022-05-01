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
    array<int,10> c= {0};
    int s;
    cin>>s;
    while(s>=0)
    {
        if(s*9/100+200<=299)
            c[1]++;
        else
        {
            if(s*9/100+200<=399)
                c[2]++;
            else
            {
                if(s*9/100+200<=499)
                    c[3]++;
                else
                {
                    if(s*9/100+200<=599)
                        c[4]++;
                    else
                    {
                        if(s*9/100+200<=699)
                            c[5]++;
                        else
                        {
                            if(s*9/100+200<=799)
                                c[6]++;
                            else
                            {
                                if(s*9/100+200<=899)
                                    c[7]++;
                                else
                                {
                                    if(s*9/100+200<=999)
                                        c[8]++;
                                    else
                                        c[9]++;
                                }
                            }
                        }
                    }
                }
            }
        }

        cin>>s;

    }
    for(int i=1;i<10;i++)
    {
        cout<<c[i]<<endl;
    }



    return 0;
}
