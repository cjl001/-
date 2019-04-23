#include<iostream>
using namespace std;
int main()
{
    double d;
    cin>>d;
    if (d <=150)
	 d=d*0.4463;
	else if (d>150&&d<=400)
	 d=0.4463*150+0.4663*(d-150);
	else
	d=150*0.4463+250*0.4663+(d-400)*0.5663;
	printf("%.1lf",d);
	return 0;
	 
}
