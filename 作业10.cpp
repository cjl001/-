#include<iostream>
using namespace std;
int main()
{
    double i[10001];
    double sum=0.0;
	int a=0;
	cout<<"num:" ;
	cin>>i[a];
	while(i[a]<-1)
    {
    	
		
    	 
		sum+=i[a];
    	a++;
    	cout<<"num:";
    	cin>>i[a];
    	
	}
	
	sum=sum/a;
	a= 0;
	while (i[a]<0) 
    {
	    if (i[a]<sum)
	   {
	   
	      cout<<i[a];
	      
     a++;  
	 }
    }
	return 0;
	 
}
