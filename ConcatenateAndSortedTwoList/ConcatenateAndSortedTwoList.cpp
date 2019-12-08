//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|---0908-226-963-----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|


#include <iostream>
#include<stdlib.h>

using namespace std;

class linked_list
{
    public:
        int data;
        struct linked_list *next;
} ;

linked_list *set_list(linked_list *now, int *array, int size)
{
    linked_list *front=now, *new_node;
    int i;

    for (i=0; i<size; i++)
    {
        new_node=(linked_list *)malloc(sizeof(linked_list));
        new_node->data=array[i];
        new_node->next=NULL;

        if (front == NULL)
            front=new_node;
        else
        {
            linked_list *curr=front;
            if (array[i] < curr->data)
            {
                new_node->next=front;
                front=new_node;
            }

            else
            {
                int p=0;
                while (p == 0)
                {
                    if (curr->next == NULL)
                    {
                        curr->next=new_node;
                        p=1;
                    }
                    else if (array[i] <= curr->next->data)
                    {
                        new_node->next=curr->next;
                        curr->next=new_node;
                        p=1;
                    }
                    curr=curr->next;
                }
            }
        }
    }
    return front;
}

int main()
{
    int m, n, num, pa[101], pb[101];
    while(cin>>m )
    {
        int i=0;
        for (i=0; i<m; i++)
        {
            cin>>pa[i];
        }

        cin>>n;
        for (i=0; i<n; i++)
        {
            cin>>pb[i];
        }

        linked_list *pc=set_list(set_list(NULL, pa, m), pb, n);

        while(pc != NULL)
        {
            cout<<pc->data<<" ";
            pc=pc->next;
        }
        cout<<endl;
    }
    return 0;
}
