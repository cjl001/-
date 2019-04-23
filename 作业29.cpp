#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
using namespace std;
list< char > newlist;
char zf[999]; 
int main()
{
    cin>>zf;
    list< char >::iterator it   = newlist.begin();
    int lon = strlen(zf);
    for(int i=0;i<lon;i++)
    {
    	if (zf[i] =='[') 
    	 it = newlist.begin();
    	else if (zf[i] == ']')
    	 it = newlist.end();
    	else
    	{
    		it = newlist.insert(it, zf[i]);
    		it++;
		}
	
		
	} 	
	for(it = newlist.begin(); it != newlist.end(); it++)
		{
			 cout<<*it;
		}
	return 0;
	 
}
