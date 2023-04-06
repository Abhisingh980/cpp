// decimal to hexa 
#include<iostream>
#include <vector>
using namespace std;

char hex(int n)
{
    switch(n)
    {
        case 10 :
         return 'A';
         break;

         case 11 :
         return 'B';
         break;

         case 12 :
         return 'C';
         break;

         case 13 :
         return 'D';
         break;

         case 14 :
         return 'E';
         break;

         case 15 :
         return 'F';
         break;

         default :
         return '0' +  n;
        
    }
}

int main()
{
    int dec;
     vector<char> ch;

    cout << "\nPlease enter a number";
    cin >> dec;

    while(dec!=0)
    {
        ch.push_back(hex(dec%16));
        dec /= 16; 
    }

    for(auto i = ch.rbegin(); i != ch.rend(); i++)
    {
        cout << " " <<  *i;  
    }

    return 0;
}