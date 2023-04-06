#include <iostream>
using namespace std;
int main()
{
    int a,remp,sum=0;
cout<<"enter the number"<<" ";
cin>>a;
if(a>0){
while (a!=0)
{
    remp=a%10;
    sum+=remp; //the sum is 
    a/=10;
}
cout<<"the sum of the number"<<" "<<sum;  
}
else
     cout<<"enter the positive number......????????"<<" \n";
    return 0;
}