/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <ctime>
#define RAND_MAX 0x7fff

using namespace std;

    int operation,sum,number(0),anotherconter,realresult,result;
    int a,b;
    int conter;
    class helper
    {
        static string getgood();
        static string getbad();
    };
    int digit()
    {
    number=rand()%10+1;
    number-=1;
    }

    static string getgood()
    {
        static string print[4]={"Very good!","Excellent!","Nice work!","Keep up the good work!"};
        return(print[rand()%4]);
    }
    static string getbad()
    {
        static string price[4]={"No. Please try again.","Worry. Try once more.","Don't give up!","No. Keep trying."};
        return(price[rand()%4]);
    }
    int main()
    {
        int realresult;
        for(conter=0;conter < 1;conter ++)
        {
            a=digit();
            b=digit();
            realresult=a*b;
            cout << "How much is " << a << " times " << b << "?" << endl;
            cin >> result;
                for(;result!=realresult;)
                {
                    if(result==realresult)
            {
                ++anotherconter;
                cout << getgood() << " " << endl;
            }
            else
                cout << getbad() << " " << endl;
                cin >> result;
                }

        }

    }
