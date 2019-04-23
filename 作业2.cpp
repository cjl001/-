#include<iostream>
using namespace std;
int main()
{
	// w=the world's population,u=the population of the China,bfb=baifengbi
	long long int w,c;
	double bfb;
	cout<<"Enter the world's population:" <<endl;	
	cin>>w;
	cout<<"Enter the population of the US"<<endl;
    cin>>c;
	bfb=c*1.0/w*100;
	cout<<"The population of the China is"<<bfb<<"% of the world population";
    return 0;
	
}

