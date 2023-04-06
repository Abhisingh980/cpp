#include <iostream>
using namespace std;
int main(void){
    int n,num=1;
    cout<<"\nenter the number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"error !factorial of negative number does not exit";
    }
    else{
    for(int i=1;i<=n;++i){
    num *=i;
    }
     cout<<"\nthe factorial of :"<<n<<"is"<<num<<endl;
    }
    return 0;
}