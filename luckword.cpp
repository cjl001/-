#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string word;
    int wor[36]={0}; 
    cin>>word;
    int len=word.size();
    for(int l=0;l<len;l++)
    {
    	wor[word[l]-'a']++;
	}
    sort(wor,wor+36);
    int min=0;
    for(int l=0;wor[l]==0;l++)
     min++;
    int luword=wor[35]-wor[min];
    bool zs=true;
	if(luword<2)
		{
		  zs=false;
		}
    for(int l=2;l<luword;l++)
    {
    	if(luword%l==0)
    	{
    	   zs=false;
		   break;	
		}
	
	}
	if(zs)
	 cout<<"luckly word";
	else
	 cout<<"no answer"; 
	return 0;
}
