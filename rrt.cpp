#include<iostream>
using namespace std;
int main()
{
    double i[10];
    double sum=0;
    for(int d=0;d<10;d++)
    {
    	cin>>i[d];
    	i[d]+=sum;
	}
    sum=sum/10;
    for(int d=0;d<10;d++)
    {
    	if (i[d]>sum)
    	 cout<< i[d];
	}
	return 0;
	 
}
