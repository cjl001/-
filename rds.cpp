#include<iostream>
using namespace std;
int main()
{
    char fh;
	int a,b;
	cin>>a>>b>>fh;
    switch(fh)
    {
    	case '+':
    	 cout<<a+b;
    	 break;
    	case '-':
    	 cout<<a-b;
    	 break;
    	case '*':
    	 cout<<a*b;
    	 break;
    	case '/':
    	 if (b!=0)
		  cout<<a/b;
		else
		 cout<<"divided zero";
    	break;
    	default:
    	cout<<"invalid operator";
    	
	}
	return 0;
	 
}
