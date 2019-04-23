#include<iostream>
using namespace std;
int main()
{
    double walk,bike,dis;
	cin>>dis;
	walk=dis/1.2;
	bike=27+dis/3.0+23;
	if(walk>bike)
	 cout<<"bike";
	else if(bike>walk)
	 cout<<"walk";
	else
	  cout<<"all";
	return 0;
	 
	 
}
