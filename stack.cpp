#include <iostream>
using namespace std;
// factorial
int fib(int a)
{
    if (a < 1)
    {
        return 1;
    }
    return a * fib(a - 1);
}
#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cout << "enter the number" << endl;
    cin >> n;
    int fs = 1, ss = 2, ts = 4;
    if (n > 0)
    {
        if (n == 1)
        {
            cout << fs << endl;
        }
        else if (n == 2)
        {
            cout << ss << endl;
        }
        else if (n == 3)
        {
            cout << ts  << endl;
        }
        else{
        for (int i = 4; i <= n; i++)
        {
            temp = ts + ss + fs;
            fs = ss;
            ss = ts;
            ts = temp;
        }
        cout << temp << endl;
        }
    }
        else
        {
            cout << "enter a positive greater than 0 number" << endl;
        }
    }
