#include <iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cout<<" enter the lower limit"<<" ";
    cout<<" enter the higer limit"<<" ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)
            c++;
        }
        if (c == 2)
        {
        cout << " " << i;
        }
        cout << c;
        c = 0;
    }
    
    return 0;
}