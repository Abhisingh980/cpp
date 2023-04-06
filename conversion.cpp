#include <iostream>
#include <math.h>
using namespace std;
int main(){
   int temp,i=0,num,oct=0;
   cout<<"enter the decimal number :\n"<<endl;
   cin>>num;
   temp =num;
   while (temp !=0)
   {
    oct+=temp%8* pow(10,i);
    temp/=8;
    i++;
   }
 cout<<oct<<endl;                                                                
}