#include<iostream>
using namespace std;

   int tripleByValue(double );
   int tripleReference(double,double);

   int main()
 {
     double count,count1;
     cin>>count;
     cout<<tripleByValue(count)<<endl;
     cout<<tripleReference(count ,count1)<<endl;
 }
    int tripleByValue(double count)
    {
        count=count*3;
        return count;
    }
    int tripleReference(double count1,double count)
    {
        count1=count;
        count1=count1*3;
        return count1;
    }

