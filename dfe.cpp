#include<iostream>
using namespace std;
int main()
{
	int house=200;
    for(int l=1;l<8;l++)
    {
    	house+=house*10/100;
	}
	cout<<house;
	return 0;
	 
}
