#include <list>
list< int >           circle;  //����һ������
list< int >::iterator it;      //λ������
it = circle.begin();           //��һ��Ԫ�ص�λ��
it = circle.end();             //���һ��Ԫ�صĺ����λ��
it = circle.erase(it);  //ɾ��itλ�õ�Ԫ�أ�������һ��Ԫ�ص�λ�÷��ظ�it��
circle.empty();        //�Ƿ��
circle.push_back(10);  //������������Ԫ�ء�
cout << *it            //���itλ�õ�Ԫ�ص�ֵ��

