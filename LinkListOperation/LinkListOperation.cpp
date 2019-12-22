#include <iostream>

using namespace std;

class LinkedList;

class ListNode
{
private:
    int data;
    ListNode *next;
public:
    ListNode():data(0),next(0) {};
    ListNode(int a):data(a),next(0) {};

    friend class LinkedList;
};

class LinkedList
{
private:
    ListNode *first;
public:
    LinkedList():first(0) {};
    void PrintList();
    void Push_front(int x);
    void Push_insert(int data,int position);
    void Push_back(int x);
    void Delete(int x);
    void Clear();
    void Reverse();
};


void LinkedList::PrintList()
{

    if (first == 0)
    {
        return;
    }

    ListNode *current = first;
    while (current != 0)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void LinkedList::Push_front(int x)
{

    ListNode *newNode = new ListNode(x);
    newNode->next = first;
    first = newNode;
}



void LinkedList::Push_insert(int data,int pos)
{
    ListNode* prev = new ListNode();
    ListNode* curr = new ListNode();
    ListNode* newNode = new ListNode();
    newNode->data = data;

    int tempPos = 0;

    curr = first;
    if(first != NULL)
    {
        while(curr->next != NULL && tempPos != pos)
        {
            prev = curr;
            curr = curr->next;
            tempPos++;
        }
        if(pos==0)
        {
            Push_front(data);
        }
        else if(curr->next == NULL && pos == tempPos+1)
        {
            Push_back(data);
        }
        else
        {
            prev->next = newNode;
            newNode->next = curr;
        }
    }
    else
    {
        first = newNode;
        newNode->next=NULL;
    }
}


void LinkedList::Push_back(int x)
{

    ListNode *newNode = new ListNode(x);

    if (first == 0)
    {
        first = newNode;
        return;
    }

    ListNode *current = first;
    while (current->next != 0)
    {
        current = current->next;
    }
    current->next = newNode;
}


void LinkedList::Delete(int x)
{
    int tempPos =1;
    ListNode *current = first,*previous = 0;
    while(current->next != NULL && tempPos != x)
    {
        previous = current;
        current = current->next;
        tempPos++;
    }

    if (x == 1)
    {
        first = current->next;
        delete current;
        current = 0;
    }
    else
    {
        previous->next = current->next;
        delete current;
        current = 0;
    }
}

int main()
{

    LinkedList list;

    int NumOfList;
    cin>>NumOfList;
    for(int i=0; i<NumOfList; i++)
    {
        int temp;
        cin>>temp;
        list.Push_back(temp);
    }
    int order;
    while(cin>>order)
    {
        if(order==0)
        {
            break;
        }
        else if (order==1)
        {
            int position,value;
            cin>>position>>value;
            list.Push_insert(value,position-1);

        }
        else if (order==2)
        {
            int position;
            cin>>position;
            list.Delete(position);
        }
        else if (order==3)
        {
            list.PrintList();
        }
        else
        {
            cout<<"Input Error"<<endl;
        }

    }

    return 0;
}

/*
Test 1:
5 1 2 3 4 5
3
2 5
3
0
Test 2:
100 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 99 2
1 99 56
3
0
Test 3:
3 -1 -6 1000
2 2
1 2 100
2 3
1 1 0
1 2 0
3
0
Test 4:
9 9 8 7 6 5 4 3 2 1
3
1 5 1
1 8 0
1 12 0
3
0
*/

/*
10 0 0 0 0 0 0 0 0 0 0
1 9 2
1 9 56
3
0
*/


