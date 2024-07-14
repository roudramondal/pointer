#include <iostream>
using namespace std;
int main ()
{
    int arr[]={10,20,30,40};
    int *ptr=arr;
    cout << *ptr << " " <<ptr<<"\n";
    ptr++;
    cout << *ptr << " " << ptr <<"\n";
    ptr--;
    cout << *ptr << " "<<ptr << "\n";
    return 0;

}