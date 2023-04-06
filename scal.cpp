#include <iostream>
using namespace std;
int main(){
    int a,b,s,su,m,d,cal;
    cout<<"enter the two number"<<" ";
    cin>>a>>b;
    cout<<"1 for sum"<<"\n";
    cout<<"2 for sub"<<"\n";
    cout<<"3 for mul"<<"\n";
    cout<<"4 for div"<<"\n";
    cout<<"enter the value for whitch profermce you want"<<" ";
cin>>cal;
    switch (cal)
    {
    case 1:
      s=a+b;
      cout<<s;
        break;

    case 2:
      su=a-b;
      cout<<su;
        break;

    case 3:
      m=a*b;
      cout<<m;
        break;

    case 4:
      d=a+b;
      cout<<d;
        break;

    //case 1:
      //s=a+b;
      //cout<<s;
        //break;
    
    default:
        break;
    }
    return 0;
}