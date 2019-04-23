#include<iostream>
#include<list> 
using namespace std;
struct Book
{
	string bookname;
	int year;
	string writer;
	int sellnum;//sellnum=卖出的数量 
};
int main()
{
    int m;
    cin>>m;
    Book book;
	list< Book >           circle;
    for(int i=0;i<m+1;i++)
    {
    	cin>>book.bookname;
    	cin>>book.writer;
    	cin>>book.year;
    	cin>>book.sellnum;
		circle.push_back(book);  //在链表后面插入元素。
	}
	list< Book >::iterator it;
	it = circle.begin();
	int sellnumber[m];
	for(int i=0;i<m+1;i++)
	{
		it++;
		sellnumber[m]=it->2
		sellnum;
	}
	return 0;
	 
}
