#include <iostream>
using namespace std;
int main(){
    int a,n,arr[100];
    cout<<"enter the variable to which you want to reverse"<<" ";
    cin>>a;
    for(int i=0;i<a;i++){
    cin>>n;
    arr[i]=n;
    }
    for(int j=a;j>=0;j--){
        cout<<" "<<arr[j]<<" , ";
    }
    return 0;

}