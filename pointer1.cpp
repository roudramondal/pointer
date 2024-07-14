#include<iostream>
using namespace std;
int main ()
{
    // int x=10;
    // int *p=&x;
    // cout << *p <<"\n";
    // x+=30;
    // cout << *p << "\n";

    // x+=40;
    // cout << *p << "\n";
    int *p1;
    double *p2;
    string *p3;
    cout << sizeof(*p1) <<"\n"<<sizeof(*p2) <<"\n"<<sizeof(*p3)<<"\n";

    return 0;
}