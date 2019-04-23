#include<iostream>
using namespace std;
struct Time
{
	int ssy;
	int szy;
};
int main()
{
	int sum=0,lon,top=0;
	cin>>lon;
	Time time[100];
    for(int s=0;s<lon;s++)
    {
    cin>>time[s].ssy;
    cin>>time[s].szy;
    if (time[s].ssy>=90&&time[s].ssy<=140&&time[s].szy>=60&&time[s].szy<=90)
     sum++;
    else
     sum=0;
    if(sum>top&&sum>0)
     top=sum;
	}
	
	cout<<top;
	return 0; 
}
