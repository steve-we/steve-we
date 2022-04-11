#include <iostream>

#include <cstdlib>

#include <ctime>

using namespace std;

int flip();

int main ()
{
    cout<<"I hane a number between 1 and 1000."<<endl;
    cout<<"Can you guess my nmber?"<<endl;
    cout<<"Please type your first guess."<<endl;
    int x,g,n=0;
    char y;

    while(1)
    {
        for(;;)
        {
            x=flip();
            cout<<x;
            cin>>g;
            n++;
            if(g>x)
            {
                cout<<"Too high.Try again."<<endl;
                continue;
            }

            if(g<x)
            {
                cout<<"Too low.Try again."<<endl;
                continue;
            }

            if(g==x)
            {
                cout<<"Excellet! You guessed the number!"<<endl;
                cout<<"Would you like to play again(y or n)?"<<endl;
                cin>>y;
                if((int)y==110) return 0;
                if((int)y==121) break;
            }
        }
    }


    return 0;
}

int flip()
{
    int n;
    srand(time(0));
    n=rand()%1000+1;
    return n;
}
