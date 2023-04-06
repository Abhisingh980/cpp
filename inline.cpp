#include <iostream>
using namespace std;
inline int sum_p(int *p,int *q){
    return *p**q;//does not use with static keyword
}
int main(){
int a=5,b=5,l;
l=sum_p(&a,&b);
cout<<l;
}