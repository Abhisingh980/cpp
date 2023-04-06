#include <iostream>
using namespace std;
void reverse(int N[],int n){
int start=0,end=n-1;
while (start<=end)
{
  swap(N[start],N[end]);
  start++;
  end--;
}

}
void printArray(int N[],int n){
    for(int i=0;i<n;i++)
    cout<<N[i]<<" ";
    cout<<endl;
}
int main(){
    int N[10],P[9];
    cout<<"enter the first array withe 10 element"<<endl;
    for(int i=0;i<10;i++)
    cin>>N[i];
    cout<<endl;
    cout<<"enter the first array withe 9 element"<<endl;
    for(int j=0;j<9;j++)
    cin>>P[j];
    reverse(N,10);
    reverse(P,9);
    cout<<"print array"<<endl;
    printArray(N,10);
    printArray(P,9);
return 0;
}