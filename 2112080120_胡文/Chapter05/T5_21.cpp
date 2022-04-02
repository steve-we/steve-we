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
    {
	int salary,time,profit;
	int c=1;
	switch(c<5){
		case 1:cout<<"please input the salary";cin>>salary;cout<<"1:"<<salary<<endl;c++;
	    case 2:cout<<"please input the salary one hour and work time";c++;
		cin>>salary>>time;
		if(time<=40) cout<<"2:"<<salary*time<<endl;
		else cout<<"2:"<<salary*40+(time-40)*salary*1.5<<endl;
	    case 3:cout<<"please input the sales gross profit";cin>>profit;cout<<"3:"<<250+profit*0.057<<endl;c++;
	    case 4:cout<<"please input the number of products and the price of a product";int a,b;cin>>a>>b;cout<<"4:"<<a*b<<endl;c++;
	}
    }
    return 0;
}
