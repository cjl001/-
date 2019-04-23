#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct CandyBar
    {
    	string pp;
    	double zl;
    	int kll;
	};
int main()
{
    
	CandyBar *cb;
	cb =(CandyBar*)malloc(sizeof(CandyBar));
	cb->pp="aaaedf";
	cb->zl=8.8;
	cb->kll=9;
	cout<<cb->pp<<cb->zl<<cb->kll<<endl;
	CandyBar *cba =new CandyBar;
	cba->pp="ddsdd";
	cba->zl =6.3;
	cba->kll =4;
	cout<<cb->pp; 
	cout<<cb->zl;
	cout<<cb->kll;
	return 0;
}
