#include<iostream>
using namespace std;
struct People
{
    string name;
	float tw;
	int ks;
};
People people[200];
int main()
{
	int n,sum=0;
    cin>>n;
    for(int a=0;a<n;a++)
    {
    	cin>>people[a].name;
    	cin>>people[a].tw;
    	cin>>people[a].ks;
    	if (people[a].tw>=37.5&&people[a].ks==1)
    	{
    		 cout<<people[a].name<<endl;
    		 sum++;
		}
	}
	cout<<sum;
	return 0;
	 
}
