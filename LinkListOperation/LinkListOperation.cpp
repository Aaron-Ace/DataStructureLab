#include <iostream>

using namespace std;

class LinkedList;    // 為了將class LinkedList設成class ListNode的friend,
// 需要先宣告
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
    // int size;                // size是用來記錄Linked list的長度, 非必要
    ListNode *first;            // list的第一個node
public:
    LinkedList():first(0) {};
    void PrintList();           // 印出list的所有資料
    void Push_front(int x);
    void Push_insert(int data,int position);     // 在list的開頭新增node
    void Push_back(int x);      // 在list的尾巴新增node
    void Delete(int x);         // 刪除list中的 int x
    void Clear();               // 把整串list刪除
    void Reverse();             // 將list反轉: 7->3->14 => 14->3->7
};


void LinkedList::PrintList()
{

    if (first == 0)                        // 如果first node指向NULL, 表示list沒有資料
    {
        //cout << "List is empty.\n";
        return;
    }

    ListNode *current = first;             // 用pointer *current在list中移動
    while (current != 0)                   // Traversal
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void LinkedList::Push_front(int x){

    ListNode *newNode = new ListNode(x);   // 配置新的記憶體
    newNode->next = first;                 // 先把first接在newNode後面
    first = newNode;                       // 再把first指向newNode所指向的記憶體位置
}



void LinkedList::Push_insert(int data,int pos)
{
    ListNode* prev = new ListNode();
    ListNode* curr = new ListNode();
    ListNode* newNode = new ListNode();
    newNode->data = data;

    int tempPos = 1;   // Traverses through the list

    curr = first;      // Initialize current to head;
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
            //cout << "Adding at Head! " << endl;
            Push_front(data);// Call function to addNode from head;
        }
        else if(curr->next == NULL && pos == tempPos)
        {
            //cout << "Adding at Tail! " << endl;
            Push_back(data);// Call function to addNode at tail;
        }
        else if(pos > tempPos+1)
        {
              //cout << " Position is out of bounds " << endl;
        //Position not valid
        }


        else
        {
            prev->next = newNode;
            newNode->next = curr;
            //cout << "Node added at position: " << pos << endl;
        }
    }
    else
    {
        first = newNode;
        newNode->next=NULL;
        //cout << "Added at head as list is empty! " << endl;
    }
}


void LinkedList::Push_back(int x)
{

    ListNode *newNode = new ListNode(x);   // 配置新的記憶體

    if (first == 0)                        // 若list沒有node, 令newNode為first
    {
        first = newNode;
        return;
    }

    ListNode *current = first;
    while (current->next != 0)             // Traversal
    {
        current = current->next;
    }
    current->next = newNode;               // 將newNode接在list的尾巴
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
        }                                         // 即結束while loop

    if (x == 1)          // 要刪除的node剛好在list的開頭
    {
        first = current->next;          // 把first移到下一個node
        delete current;                 // 如果list只有一個node, 那麼first就會指向NULL
        current = 0;                    // 當指標被delete後, 將其指向NULL, 可以避免不必要bug
        // return;
    }
    else                                // 其餘情況, list中有欲刪除的node,
    {
        previous->next = current->next; // 而且node不為first, 此時previous不為NULL
        delete current;
        current = 0;
        // return;
    }
}

int main()
{

    LinkedList list;     // 建立LinkedList的object

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

5 1 2 3 4 5
3
2 5
3
0
*/
