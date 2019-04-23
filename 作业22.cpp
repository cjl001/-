#include<iostream>
using namespace std;
int main()
{
    int ys[12];
    int cq[12];
    for(int i=0;i<12;i++)
	 cin>>ys[i];
    int sy=0;
    int a=0;
    for(int i=0;i<12;i++)
    {
        if(sy+300-ys[i]>=0)
         cq[i]=(sy+300-ys[i])/100*100;
        
    	if(sy+300-ys[i]<0&&a==0)
         a=i+1;  
		sy=(sy+300-ys[i])%100;
    }
    int sum=0;
    for(int i=0;i<12;i++)
    {
    	sum=sum+cq[i];
	}
    sum=sum*1.2;
    sum=sum+sy;
    if (a==0) 
	 cout<<sum;
	else 
	 cout<<-a;
	return 0;	 
}
