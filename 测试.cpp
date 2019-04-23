#include<iostream>
using namespace std;
int main()
{
    long long int i=1;
    int num;
    int y=5%8*9^6; 
    for(long long int g=0;g<i;i++)
    {
    	cout<<"guess number";
    	if (cin>>num)
    	 {
    	 	i=0;
    	 	int x=y;
    	 	if(num =x)
    	 	{
    	     cout<<"right";
			}
		 }
		g++;
	}
	return 0;
}
