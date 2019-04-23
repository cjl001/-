#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double br[1000];
    int sl;
    cin>>sl;
    for(int i=0;i<sl;i++)
     cin>>br[i];
    double smallest=999999999;
    double biggest =0;
    for(int i=0;i<sl;i++)
    {
    	if(br[i]>biggest)
    	 biggest=i; 
    	if(br[i]<smallest)
    	 smallest=i;
	}
	int sum=0;
	for(int i=0;i<sl;i++)
	{
		if (i==smallest||i==biggest)
		 br[i]=0;
		else
		sum+=br[i];
	} 
	double pj=sum/(sl-2);
	double zdcj=0.0;
	for(int i=0;i<sl;i++)
    {
        if (i!=smallest&&i!=biggest)
         {
         	if(fabs(br[i]-pj)>zdcj)
         	 zdcj=fabs(br[i]-pj);
		 }
	}
	cout<<pj<<endl;
	cout<<zdcj;
	return 0;
	 
}
