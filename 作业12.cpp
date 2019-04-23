#include<iostream>
#include<cstring>
char a[1001];
using namespace std;
int main() {
	int s=0,k,f;
	char*q,*w,*t;
	int l;


	cin>>a;
	l = strlen(a);

	f=l;
	s=0;

	while(f>1) 
	{
		q = &a[s];
		k=l-s-1;
		w = &a[k];
		t = q;
		w = q;
		t =w;

		s++;
		f--;
	}
	cout<<;

	return 0;

}
