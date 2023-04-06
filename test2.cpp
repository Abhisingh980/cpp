#include <iostream>
using namespace std;
void printfn(int test){
   if(test<1)
    return ;
    else{
        //cout<<test<<" ";
        printfn(test-1);
        cout<<test<<" ";
        return;
    }
}
int main(){
    int test =4;
    printfn(test);
}