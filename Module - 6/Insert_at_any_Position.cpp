#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v) //   null er ghor ber kora
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Insert at head" << endl;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp ekhn last node e
    temp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void print_linked_list(Node *head) //    print kora
{
    cout << endl;
    cout << "your linked list"
         << " ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void intsert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl<< endl<< "Inserted at position " << pos << endl<< endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: insert at tail" << endl;
        cout << "option 2: print linked list" << endl;
        cout << "option 3: Insert at any position " << endl;
        cout << "option 4: Terminate " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "please enter a value" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "enter pos: ";
            cin >> pos;
            cout << "enter value: ";
            cin >> v;
            intsert_at_position(head,pos,v);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}