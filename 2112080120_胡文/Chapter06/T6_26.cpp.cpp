/*
 Filename:
 Author:Hu wen
 Time:Apr 10,2022
 Function:
 */
 #include <iostream>

using namespace std;

int celsius(int i){
    for(int i=0;i<=100;i++) {
   cout<<"���϶�:"<<i<<"\t"<<"�����¶�:"<<9*i/5+32<<endl; }
   return 0;
}

int fahrenheit(int j){
    for(int j=32;j<=212;j++) {
   cout<<"�����¶�:"<<j<<"\t"<<"�����¶�:"<<5*(j-32)/9<<endl;}
   return 0;
}


int main()
{
    int i=0,j=32;
        cout<<celsius(i);
        cout<<fahrenheit(j);
    return 0;
}
