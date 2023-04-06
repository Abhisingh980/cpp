#include <iostream>
using namespace std;
int main(){
           float avg,k;
           int a,um=0,arr[100];
           cout<<"enter the number"<<" ";
           cin>>a;
           for(int j=0;j<a;j++){
                      cin>>k;// cin >> arr[j]
                      arr[j]=k;
           }
          
           for (int i=0;i<a;i++ ){
                      //cin>>n;
                      sum+=arr[i];
           }
           avg=(float)sum/a;// explicit type conversion
           cout<<avg<<endl;
  return 0;
 }