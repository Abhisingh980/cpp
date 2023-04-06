#include <iostream>
using namespace std;
int array_Max(int num[],int a){
    int MAX=INT_MIN;
    for(int i=0;i<a;i++){
        //MAX=max(MAX,num[i]);
    if(num[i]>MAX)
    MAX=num[i];
    }
    return MAX;
 }
 int array_Min(int num[],int a){
    int MIN=INT_MAX;
    for(int i=0;i<a;i++){
    //MIN=min(MIN,num[i]);
    if(num[i]<MIN)   
    MIN=num[i];
    }
    return MIN;
 }
 int main() {
    int arr[100],a;
    cout<<"enter the number of term !>100"<<endl;
    cin>>a;
    cout<<"enter the number"<<endl;
    for(int i=0;i<a;i++)
    cin>>arr[i];
     cout<<"the max value is"<<"="<<array_Max(arr,a)<<endl;
     cout<<"the min value is"<<"="<<array_Min(arr,a)<<endl;
    return 0;
}