#include<iostream>
#include<stdlib.h>
using namespace std;
int r=0;
int login(string username,string passwd);
void creataccount();
struct User1
{
    string username;
    int accountid;
	string name;
	int age;
	int phonenumber;
	string addr;
	string passwd;
	int vip;
	int score;
};
User1 user1; 
int main()
{ 
	string p,account,passwd;
	cout<<"creat account or login or exit"<<endl;
	getline(cin,p);
	while (p!="exit")
	{
	 if (p=="creat account")
	 { 
	 creataccount();
	 cout<<"creat account or login or exit"<<endl;
	 cin>>p;
	 }
	 if(p=="login")
	 {
	 cout<<"enter your account and passwd"<<endl;
	 cin>>account>>passwd;
	 int i=login(account,passwd);
	 if (i==1)
	 {
	  cout<<"login successed"<<endl;
	  r=1;
	  cout<<"hello "<<user1.name<<endl;
	  cout<<"you are vip"<<user1.vip<<endl;
	  cout<<"you have"<<user1.score<<"scores"<<endl;
     }
	 else
	  cout<<"passwd or username are not corret"<<endl;
    }
	else
	{
	 cout<<"creat account or login or exit"<<endl;
	 cin>>p;
	}
	 int a=rand()%100,b=rand()%100,c,d;
  if (r==1)
{ 
	cout<<a<<"+"<<b<<"=";
    c=a+b;
	cin>>d;
	if (d==c)
	{
	 	cout<<"you are right"<<endl;
	 	user1.score++;
	}
	else
	{
		cout<<"you aren't right"<<endl;
		user1.score--;
	}
	if (user1.score>10)
	{
		user1.vip=user1.vip+1;
		user1.score=user1.score-10;
	}
  }
}
	return 0;
}
void creataccount()
{
  cout<<"enter your user name";
  getline(cin,user1.username);
  cout<<"enter your name";
  getline(cin,user1.name);
  cout<<"enter your age";
  cin>>user1.age;
  cout<<"enter your phonenumber";
  cin>>user1.phonenumber;
  cin.ignore(); 
  cout<<"enter your passwd";
  getline(cin,user1.passwd);
  cout<<"enter your addr";
  getline(cin,user1.addr);
  int a=rand()%100000000000000+100000000;
  user1.accountid=a;
  cout<<"your account id is"<<a<<endl;
}
int login(string username,string passwd)
{
    if  (user1.username ==username&& user1.passwd==passwd)
     return 1;
    else
     return 0;
}
