#include<iostream>
using namespace std;
double thpzs(double a, double b); 
int main()
{
	double a, b;
	
	while (true)
	{	
	    cin >> a >> b;
		if (a==0 || b==0)
		 break;
		cout<<thpzs(a, b);
		
    }
    return 0;

}
double thpzs(double a, double b)
{
    double s;
	s = 2.0*a*b / (a + b);
	
	return s; 
}
