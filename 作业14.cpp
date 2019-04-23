#include<iostream>
using namespace std;
int ss(int s);
int main()
{ 
	int s=3;
	cout<<"less than 200 prime numbers are ";
	for (int d=0;d<200;d++)
	{
		cout<<ss(s)<<" ";
		s++;
	}
	 
	return 0;
}
int ss(int s)
{
	int d=2;
	int l;
	l=s;
    while(l>0&&s%d!=0||d==s)
    {
    d++;
	l--;
	return s;
	}

}
