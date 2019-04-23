#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
	cin>>n>>x>>y;
	if(y%x==0&&n-y/x>-1)
	cout<<n-y/x;
	else if(n-y/x-1>-1)
	 cout<<n-(y/x+1);
	else
	 cout<<0;
	return 0;
}
