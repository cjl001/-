#include <list>
list< int >           circle;  //定义一个链表
list< int >::iterator it;      //位置类型
it = circle.begin();           //第一个元素的位置
it = circle.end();             //最后一个元素的后面的位置
it = circle.erase(it);  //删除it位置的元素，并将下一个元素的位置返回给it。
circle.empty();        //是否空
circle.push_back(10);  //在链表后面插入元素。
cout << *it            //输出it位置的元素的值。

