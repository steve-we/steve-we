/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#define RAND_MAX 0x7fff

using namespace std;


    int operation,gradte,number(0),anotherconter,realresult,result;
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
        switch(gradte)
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
    char type()
    {
        char operate[5]={'=','+','-','*','/'};
        switch(operation)
    {
        case 1:
        realresult=a+b;
        break;
        case 2:
        realresult=a-b;
        break;
        case 3:
        realresult=a*b;
        break;
        case 4:
        realresult=a/b;
        default:;
        break;
    }
    return(operate[operation]);
    }
    int main()
    {
        cout << "请输入1或2选择一位数计算或两位数计算：" ;
        cin >> gradte;
        cout << "选择所要进行的运算.(1:'+')(2:'-')(3:'*')(4:'/'): ";
        cin >> operation;
        for(conter=0;conter < 11;conter ++)
        {
            a=digit();
            b=digit();
            cout << "How much is " << a << type() << b << "?" << endl;
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
