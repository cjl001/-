#include<iostream>
using namespace std;
long int a(int n)
{  
   if(n==0)
     return 1;
   else
     return n*a(n-1);
}
int main()
{
    cout<<a(100);
    return 0;
}
