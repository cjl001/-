#include<iostream>
using namespace std;
int ab[100][100];
int main()
{
    int n,na,nb;
    int a[100],b[100];
	cin>>n;
	cin>>na;
	cin>>nb;
	for(int f=0;f<na;f++)
	 cin>>a[f];
	for(int f=0;f<nb;f++)
	 cin>>b[f];
	ab[5][0]=1;
	ab[2][5]=1;
	ab[0][2]=1;
	ab[0][5]=-1;
	ab[5][2]=-1;
	ab[2][0]=-1;
	ab[2][2]=0;
	ab[5][5]=0;3;
	ab[0][0]=0;
	int awin=0,bwin=0;
	for(int f=0;f<n;f++)
	 awin+=ab[a[n%f]][b[n%f]];
    if(awin>bwin)
     cout<<"A";
    else if(awin<bwin)
     cout<<"B";
    else
     cout<<"draw";
    return 0;
	}
