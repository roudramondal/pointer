#include <iostream>
using namespace std;
int main ()
{
   int arr []={10,20};
   int *ptr=arr;
   *++ptr;
   cout << arr[0]<<"\n";
   cout <<  arr[1]<<"\n";
   cout << *ptr;
   return 0;
}