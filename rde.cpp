#include<iostream>
using namespace std;
int main()
{
    int dn[105];
	int n,m;
	cin>>n>>m;
	for(int i=1;i<n;i++)
	{
		dn[i]=i;
	}
	int a=1;
	for(int i=0;i<m-1;i++)
	{
		a++;
		if (a==0)
		 i--;
		if(a==n+1)
		 a=1;
	}
	a=0;
	cout<<a;
	return 0;
}
