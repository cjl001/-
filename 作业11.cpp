#include<iostream>
#include <string>
using namespace std;
struct yhzh 
{
	long long int zh;
	long long int sfzhm;
	string name;
	string add;
	double money;
};

int main()
{
    yhzh YHZH;
    cout<<"plz enter account";
    cin>>YHZH.zh;
    cout<<"plz enter shenfenzhen number";
    cin>>YHZH.sfzhm;
    cout<<"plz enter your name";
    getline(cin,YHZH.name);
    cout<<"plz enter add";
    getline(cin,YHZH.add);
    cout<<"plz enter money";
    cin>> YHZH.money;
    cout<<YHZH.zh<<endl;
    cout<<YHZH.sfzhm<<endl;
    cout<<YHZH.name<<endl;
    cout<<YHZH.add<<endl;
    cout<<YHZH.money<<endl;
    return 0;
	 
}
