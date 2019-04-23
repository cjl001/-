#include<iostream>
using namespace std;
int main()
{
    int a=0,n,b,g;
    cin>>n>>g;
    
	for (int c=n;c>0;c--)
	{
	b=c;
    while (true)
    {
	   if(b%10==g)
       a++;
       b=b/10;
       if (b%10==0)
        break;
	}
	}
    cout<<a;
	return 0;
	 
}
