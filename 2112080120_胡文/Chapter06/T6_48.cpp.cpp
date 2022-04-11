#include<iostream>
#include<cstdlib>
#include<ctime>

unsigned int rollDice();
using namespace std;
int main()
{int wager;
   while(1)
   {
       cin>>wager;
       if(wager>1000)
        cout<<"ÄãÑºµÃÌ«¶àÁË£¡"<<endl;
       else
        break;
   }
   enum Status{CONTINUE,WON,LOST};
   srand(static_cast<unsigned int>(time(0)));
   unsigned int myPoint=0;
   Status gameStatus=CONTINUE;
   unsigned int sumOfDice=rollDice();

   switch(sumOfDice)
   {
   case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"point is "<<myPoint<<endl;
        break;
   }
   while(CONTINUE==gameStatus)
   {
       sumOfDice=rollDice();
       if(sumOfDice==myPoint)
        gameStatus=WON;
       else
        if(sumOfDice==7)
        gameStatus=LOST;
   }
   if(WON==gameStatus)
    cout<<"Player wins"<<"\t"<<"bankBalance "<<1000+wager;
   else
   {
       if(1000-wager==0)
        cout<<"Player losts"<<"\t"<<"Sorry. You busted!"<<endl;
       else
        cout<<"Player losts"<<"\t"<<"bankBalance "<<1000-wager<<endl;
   }
}


   unsigned int rollDice()
   {
       unsigned int die1=1+rand()%6;
       unsigned int die2=1+rand()%6;

       unsigned int sum=die1+die2;

       cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
       return sum;

   }

