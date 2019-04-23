#include<iostream>
using namespace std;
struct students
{
	string name;
	int pjcj;
	int bjpycj;
	char gb;
	char xb;
	int lw;
	int money=0;
};
students student[100];
int main()
{
	int num,max=0,sum=0;
	string maxname;
    cin>>num;
    for(int a=0;a<num;a++)
    {
    	cin>>student[a].name;
    	cin>>student[a].pjcj;
    	cin>>student[a].bjpycj;
    	cin>>student[a].gb;
    	cin>>student[a].xb;
    	cin>>student[a].lw;
    	if(student[a].pjcj>80&&student[a].lw>0)
    	 student[a].money+=8000;
    	if(student[a].pjcj>85&&student[a].bjpycj>80)
    	 student[a].money+=4000;
        if(student[a].pjcj>90)
		 student[a].money+=2000;
		if(student[a].xb=='Y'&&student[a].pjcj>85)	
		 student[a].money+=1000;
		if(student[a].pjcj>80&&student[a].gb=='Y')
		 student[a].money+=850;
		if (student[a].money>max)
		{
		 maxname=student[a].name;
		 max=student[a].money;
		}
		sum+=student[a].money;
	}
	cout<<maxname<<endl<<max<<endl<<sum;
	return 0;
	 
}
