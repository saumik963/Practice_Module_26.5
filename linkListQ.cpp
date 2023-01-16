#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};
class LinkedList
{
public:
    node *head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        size++;
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    int getValue(int value)
    {
        node *a = head;
        int ind = 0;
        while (a->nxt != NULL)
        {
            if (ind == value)
            {
                return a->data;
            }
            a = a->nxt;
            ind++;
        }
        return -1;
    }
    int getSize()
    {
        return size;
    }
    void swapFirst()
    {
        node *a = head;
        swap(a->data, a->nxt->data);
    }

    void printReverse()
    {
        ReverseRecurtion(head);
        cout << "\n";
    }
    void ReverseRecurtion(node *n)
    {
        if (n != NULL)
        {
            ReverseRecurtion(n->nxt);
            cout << n->data << " ";
        }
    }
    void InsertAtAnyIndex(int index, int value)
    {
        if (index < 0 || index > size)
        {
            return;
        }

        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        size++;
        int cur_index = 0;
        node *a = head;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        size--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void DeleteAnyIndex(int index)
    {
        if (index < 0 || index > size - 1)
        {
            return;
        }
        if (index == 0)
        {
            DeleteAtHead();
            return;
        }
        size--;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
    void InsertAfterValue(int value, int data)
    {
        node *a = head;
        while ((a != NULL))
        {
            if (a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if (a == NULL)
        {
            cout << value << " Doesn't exist!"
                 << "\n";
            return;
        }
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
};
int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";
    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.InsertAtAnyIndex(0, 55);
    l.InsertAtAnyIndex(6, 99);

    // l.printReverse();
    l.Traverse();
    // l.DeleteAtHead();
    // l.DeleteAnyIndex(6);
    l.InsertAfterValue(99, 68);
    l.Traverse();
    cout << l.getSize() << "\n";
    return 0;
}
