#include<iostream>
#include <list>
using namespace std;
int main()
{
    int n,m;
	cin>>n>>m;
	 list< int >           circle;
	 for(int i=1;i<n+1;i++)
	 {
	 	circle.push_back(i);
	 }
	list< int >::iterator it;
	it = circle.begin();
	while(!circle.empty())
	{
	for(int i=0;i<m-1;i++)
	{
		it++;
	    if (it ==circle.end())
	     it =circle.begin();
	}
	cout << *it;
	it = circle.erase(it);
	if (circle.empty())
	 cout<<endl;
	else
	 cout<<" ";
	
	
	}
	cout<<endl; 
	return 0;
	 
}
