#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int cur,last;
char zf[999];
int zfn[999]
zfn[0]=0;
int main()
{
    cin>>zf;
    int len = strlen(zf);
    cur=0;
    last=0;
    for(int i=0;i<len;i++)
    {
        if(zf[i]=='[')
         cur=0;
        if(zf[i]==']')
         cur=last;
        else
	{
	 zfn[i]=zfn[cur];
         zfn[cur]=i;	
	}
        if(last==cur)
         last=i;
        cur=i;
    }
    for(int i=zfn[0];i ！=0；i=zfn[i])
     cout<<zf[i];
	return 0;
	 
}
