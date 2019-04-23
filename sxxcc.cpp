#include<iostream>
using namespace std;
int main()
{
    int lon=0;
    string a;
    getline(cin,a);
	while(a!='\0')
	{
	    if (a>='0'&&a<='9')
	     lon++;
	}
	cout<<lon;
	return 0;
}
