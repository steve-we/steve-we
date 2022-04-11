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
        int digit();
        char type(char operate);
        char alltype();
        static string getgood();
        static string getbad();
    };
    int digit()
    {
        switch(sum)
    {
case 1:
    number=rand()%10+1;
    number-=1;
    break;
case 2:
    number=rand()%100;
    break;

    default:;
    break;
    }
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
        cout << "请输入1或2选择一位数计算或两位数计算：" ;
        cin >> sum;
        for(conter=0;conter < 11;conter ++)
        {
            a=digit();
            b=digit();
            realresult=a*b;
            cout << "How much is " << a << "*" << b << "?" << endl;
            cin >> result;
            if(result==realresult)
            {
                ++anotherconter;
                cout << getgood() << " " << endl;
            }
            else
                cout << getbad() << " " << endl;
        }
        if(anotherconter<7)
            cout << "Please ask your teacher for extra help." ;

    }
