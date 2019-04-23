#include<iostream>
using namespace std;
int main()
{
    int n;
	int m;
	cin>>n;
	cin>>m;
	int nn[n];
	for(int i=1;i<n+1;i++)
	{
		nn[i]=1;
	}
	int f;
    for (int g=1;g<m+1;g++)
	{
		for (int i=1;i<n+1;i++)
		{
			if(i%g==0)
			 {
			 	if(nn[i]==0)
			 	 nn[i]=1;
			 	else if(nn[i]==1)
			 	 nn[i]=0;
			 }
		}
	}
	for(int i=1;i<n+1;i++)
	{
		int u=0;
		u=0;
	    if(nn[i]==0)
	    {
	    cout<<i;
		u=1;	
		}
		if (u=1)
		 cout<<",";
	}
	return 0;
	 
}
