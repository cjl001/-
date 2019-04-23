#include<iostream>
using namespace std;
int main()
{
    int y;//y=years
    cin>>y;
    ;
	 
	if  (y%4==0&&y%100!=0||y%400==0)
	 cout<<y<<"is a leap year";
	else
	 cout<<y<<"isn't a leap year";
	return 0;
	 
}
