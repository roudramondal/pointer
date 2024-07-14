// #include <iostream>
// using namespace std;
// void sum (int *y)
// {
//     *y=*y+2;
// }
// int main ()
// {
//     int x=10;
//     sum(&x);
//     cout << x<<"\n";
//     // cout << sum(y);
//     return 0;
// }
#include<iostream>
using namespace std;
void fun(string *s)
{
    cout << *s;
}
int main ()
{
    string x="Roudra Mondal";
    fun(&x);
    return 0;


}
