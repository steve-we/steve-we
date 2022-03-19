#include <iostream>

using namespace std;

int main()
{
   int counter[10],b=1;
	for(int i=1;i<=10;i++){
		cin>>counter[i];
	}
	int number=0;
	while(b<=10){
		if(counter[b]>=number){
			number=counter[b];
		}
		b++;
	}
	cout<<number;
	return 0;
}
