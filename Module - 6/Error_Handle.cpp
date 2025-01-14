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

void intsert_at_position(Node *head, int pos, int v) // insert korbe node
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head" << endl
         << endl;
}

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid index" << endl
             << endl;
        return;
    }
    // tmp ekhn position er ager ghore ese poreche
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "Delete Position " << pos << endl
         << endl;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
            cout << endl
                 << "Head is not available" << endl
                 << endl;
            return;
    }
        Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Deleted Head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: insert at tail " << endl;         // done
        cout << "option 2: print linked list" << endl;       // done
        cout << "option 3: Insert at any position " << endl; // done
        cout << "option 4: Insert at any head " << endl;     // done
        cout << "option 5: Delete from position " << endl;   // done
        cout << "option 6: Delete head " << endl; // done
        cout << "option 7: Terminate " << endl;
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
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                intsert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
                delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}