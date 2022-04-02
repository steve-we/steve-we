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
    #include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double amount;
	double principal=24;
	double rate=0.1;
	cout<<"year"<<setw(21)<<"amount on deposit"<<endl;
	for(unsigned int year=1;year<=387;++year){
		amount=principal*pow(1.0+rate,year);
		cout<<setw(4)<<year<<setw(21)<<amount<<endl;
	}
    return 0;
}
