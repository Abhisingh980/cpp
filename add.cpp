#include<iostream>

using namespace std;

int main()
{
    int T,res[1000],i=0,j=0,tc,a,b;
    cin >> T;
    tc = T;
    while(T)
    {
        cin >> a >> b;
        res[i] = a + b; ,
        i++;
        T--;

    }

    while(j < tc)
    {
        cout << res[j] << endl;
        j++;
    }


}