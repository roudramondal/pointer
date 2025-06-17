#include <iostream>
using namespace std;
int isprime (int n)
{
    if (n <= 1)  // if else statement 
    return 0;
    for (int i=2;i<n;i++)
    {
    if (n%i==0)
    return 0;
    }
    return 1;
}
int main ()
{
    int x;
    cin >> x;
    isprime(x);
    cout << x;

}
