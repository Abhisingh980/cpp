#include<iostream>
using namespace std;

int value_break(int n)
    {
        if(n / 10 == 0)
        return n;

        else
        {
            int a=n%10;
            cout<<a;
            return (a + value_break(n/10));
        }
    }

int main()
{
    int num,sum;
    cout << " Please enter a number : ";
    cin >> num;
    cout << value_break(num);
    
    return 0;
}