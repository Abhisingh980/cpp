#include <iostream>
using namespace std;
// int a=3;
// int* b;
// b=&a;
// cout<<" "<<&a<<" "<<b<<" "<<*b<<endl;
// cout<<endl;
// int **c=&b;
// cout<<c<<" "<<*c<<" "<<**c;
// Array pointer
// call by reference
void swap_y(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << " " << *b;
    cout << endl;
}

int &swap_value(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return a;
}
int main()
{
    int a = 5, b = 8;
    int c = 9, d = 0;
    swap_y(&a, &b);
    swap_value(c, d) = 223;
    cout << endl;
    cout << c;
    return 0;
}