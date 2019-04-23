#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int nd[n];
    for(int i=0;i<n;i++)
    {
      nd[n]=i+1;
    }
   int w=0;
   int b=1;
   int s=0;
   while(b==1)
   {
   	for(int i=0;i<m;i++)
    {
    	if (nd[i]==-1)
    	{
    	  m++;
    	  w++;
		}
	}
	cout<<nd[w];
	nd[m]=-1;
	m=m-w;
	b=0;
	for(int i=0;i<n;i++)
	{
		if(nd[i]!=-1)
		{
			b=1;
		}
	}
	if(b==1)
	{
		cout<<" ";
	}
	else
	{
		cout<<endl;
	}
   } 
   
	return 0;
}
