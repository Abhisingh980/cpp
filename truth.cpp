#include <iostream>
using namespace std;
void binary_number(int n)
{
int bin_num[1000];
int i = 0;
while (n > 0) {
bin_num[i] = n % 2;
n = n / 2;
i++;
}
for (int j = i - 1; j >= 0; j--)
cout << bin_num[j];
cout << endl;
}
void binary_number_generation(int n)
{
for(int i = 0; i<= n; i++)
{
binary_number(i);
}
}
int main()
{
int n;
cout << "Enter the end value : ";
cin >> n;
cout << "\nBinary numbers from 1 to "<< n << " : " ;
cout << endl;
binary_number_generation(n);
}