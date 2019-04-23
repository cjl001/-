#include<iostream>
using namespace std;
int main()
{
    int n,k,time=1;
    cin>>n>>k;
    for(int t=0;true;t++)
    {	
    double house=200;
     for(int l=1;l<t;l++)
     {
    	house+=house*10/100;
	 }
     if(house<=t*n&&house>(t-1)*n)
        break;
     else
      time++;
    }
    if(time<20)
     cout<<time;
    else
     cout<<"impossble";
    return 0;
}
