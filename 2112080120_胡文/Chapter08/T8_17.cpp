/*
 Filename:
 Author:Hu Wen
 Time:Apr 29, 2022
 Function:
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
using namespace std;
void pusherror();
void halt();
void start();
void action(int,int,int);
void input();
int memory[100];
int acc=0;
int counter;
int operand;
int operationCode;
string instructionRegister="+0000";


int main()
{
    start();
    input();
    return 0;
}
void start() //输出开机内容
{
    cout << "*** Welcome to Simpletron! ***" << endl << "*** Please enter your program one instruction ***" << endl;
    cout << "*** (or data word) at a time.I will type the ***" << endl << "*** location number and a question mark(? ). ***<<endl";
    cout << "*** You then type the word for that location. ***" << endl << "*** Type the sentinel - 99999 to stop entering ***" << endl;
    cout << "*** your program. ***" << endl;
}
void pusherror()//打印错误信息
{
    cout << "*** Attempt to divide by zero ***" << endl;
    cout << "*** Simpletron execution abnormally terminated ***" << endl;
    halt();
    input();
}
void halt()//输出内存的全部内容
{
    string sp = "        ";
    cout << "REGISTERS" << endl;//输出各寄存器中的值
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left) << setw(21) << "accumlator" << setiosflags(ios::right) << setw(6) << "+" << setw(4) << setfill('0') << acc << setfill(' ') << endl;
    cout << resetiosflags(ios::right) << setw(21) << "counter" << setiosflags(ios::right) << sp << setw(2) << setfill('0') << counter << setfill(' ') << endl;
    cout << resetiosflags(ios::right) << setw(21) << "instructionRegister" << setiosflags(ios::right) << setw(10) << instructionRegister << endl;
    cout << resetiosflags(ios::right) << setw(21) << "operationCode" << setiosflags(ios::right) << sp << setw(2) << setfill('0') << operationCode << setfill(' ') << endl;
    cout << resetiosflags(ios::right) << setw(21) << "operand" << setiosflags(ios::right) << sp << setw(2) << setfill('0') << operand << setfill(' ') << endl << endl;
    cout << "MEMORY:" << endl;
    cout << "  ";
    for (int i = 0; i < 10; i++) //输出内存中内容
    {
        cout << setiosflags(ios::right) << setw(8) << i;
    }
    cout << endl << " 0";
    int k = 0;
    for (int i = 0; i < 100; i++)
    {
        if (k > 0 && k % 10 == 0)
            cout << endl << setw(3) << setfill(' ') << k;
        cout << " +" << setw(5) << setfill('0') << memory[i];
        k++;
    }
    cout << endl;
    input();
}
void action(int op, int p, int n)
{
    counter = p;
    operationCode = op;
    operand = p;
    if (n < -9999 || n>9999)
        pusherror();
    switch (op)
    {
    case 10:
        memory[p] = n;
        input();
        break;
    case 11:
        cout << memory[p] << endl<<endl;
        input();
        break;
    case 20:
        acc = memory[p];
        input();
        break;
    case 21:
        memory[p] = acc;
        input();
        break;
    case 30:
        acc += memory[p];
        input();
        break;
    case 31:
        acc -= memory[p];
        input();
        break;
    case 32:
        if (memory[p] == 0)
            pusherror();
        acc /= memory[p];
        input();
        break;
    case 33:
        acc *= memory[p];
        input();
        break;
    case 40:
        memory[p] = acc;
        counter = operand;
        input();
        break;
    case 41:
        if (acc < 0) {
            memory[p] = acc;
            acc = 0;
        }
        input();
        break;
    case 42:
        if (acc == 0) {
            memory[p] = acc;
            acc = 0;
        }
        input();
        break;
    default:
        cout << "你的输入有误，请重新输入！" << endl;
        input();
    }
}
void input()
{
    cout << "? ";
    string in;
    getline(cin, in);
    if (in.compare("halt") != 0)
        instructionRegister.assign(in);
    string::size_type k = in.find('+');
    string::size_type l = in.find("halt");
    if (l != string::npos)
        halt();
    else if (k == string::npos) {
        cout << "你的输入有误!请重新输入" << endl;
        input();
    }
    string order = in.substr(1, 2);
    string x, n;
    x = in.substr(3, 2);
    if (in.length() > 5)
        n = in.substr(5);
    else
        n = "0";
    int d = stoi(n);
    int c = stoi(x);
    int iorder = stoi(order);
    if (c < 0 || c>99)
        pusherror();
    if (iorder == 43) {
        cout << "*** Program end. ***" << endl;
        return;
    }
    action(iorder, c, d);
}
