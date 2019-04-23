#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    char g[100];
    cin>>a>>b;
    for(int c=a;c>0;c--)
    {
    	sprintf(g,"%d",c);
	
	for(int e=0;g[e]!='\0';e++)
	{
		if (g[e]==b+'0')
		 sum++;
	}
    }
	cout<<sum;
	return 0;
}
