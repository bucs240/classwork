#include<iostream>;
using namespace std;


class list{

}

bool wellformed (const list &l)//快慢指针
{
    Node * slow = l.head, *fast1=l.head, *fast2=l.head;
    fast2 = fast1->next;
    while（slow && fast1= fast2-->next && fast2=fast1->next){
        if(slow==fast1||slow==fast2)return fasle;
        slow=slow->next;
    }
    return true;
}