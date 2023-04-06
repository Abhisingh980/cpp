#include <iostream>
using namespace std;
bool liner_search(int arr[],int a,int n){
 for(int i=0;i<a;i++){
    if(arr[i]==n)
    return 1;
 }
  return 0;
}
int main(){
    int arr[100],a,n;
    bool b;
    cout<<"entr the size but not greter than 100"<<endl;
    cin>>a;
    for(int i=0;i<a;i++)
    cin>>arr[i];
    cout<<"enter the number which you want to search"<<endl;
    cin>>n;
    b=liner_search(arr,a,n);
    cout<<b<<endl;
    return 0;

}