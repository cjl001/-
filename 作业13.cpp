#include<iostream>
#include<cstring>
char a[1001];
using namespace std;
int main() 
{
	int s=0,h;
	char *q;
	int l;


	cin>>a;
	l = strlen(a);
	q=a;
	q=q+l-1;
    h=l; 
	while(h>0) 
	{
		cout<<*q;
		h--;
		q--;
	}
	

	return 0;

}
