#include<iostream>
using namespace std;
int main(){
	int a,c=1;
	cout<<"1 if true"<<endl;
	cout<<"0 if false"<<endl;
    cout<<"enter the number"<<" ";
    while(c){
        cin>>a;
    if(a<0 || a>0){
	if(a%2==0){
		cout<<"the number is eveen"<<" \n "<<" the boolean value is "<< " "<<(a%2==0)<<" ";
	  c=0;
    }
	else{
		cout<<"the number is odd"<<" \n "<<" the boolean value is "<< " "<<(a%2==0)<<" ";
	c=0;
    }
	}
	else{
		cout<<"please enter the valid number"<<" \n"<<"enter the number again\n";
	 c=1;
     cin.clear();
     fflush(stdin);
    }
    }
	return 0;
}