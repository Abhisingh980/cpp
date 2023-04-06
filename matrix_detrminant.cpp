#include <iostream>
using namespace std;
int main(){
    int arr[3][3],sum1,sum2,sum3,l;
   cout<<"enter the 3x3  matrix"<<endl;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    cin>>arr[i][j];
   }
for(int k=0;k<3;k++){
    if(k==0){
        sum1=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]));
    }
    if(k==1){
        sum2=arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2]));
    }
    if(k==2){
        sum3=arr[0][2]*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]));
    }
}
cout<<"determenant is "<<"="<<sum1-(sum2)+sum3<<endl;
l=sum1-(sum2)+sum3;
if(l==0)
cout<<"it is sigluar matrix"<<endl;
else
cout<<"it is not a singular matrix"<<endl;

return 0;
}