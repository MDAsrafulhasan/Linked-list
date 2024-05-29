#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL){
        head = newNode;
        cout << endl << "Insert at head" << endl;
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
    cout << "your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void intsert_at_any_position(Node *head, int pos, int v) // insert korbe node
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
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
    if (head == NULL){
        head = newNode;
        cout << endl << "Insert at head" << endl;
        return;
    }
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
        cout << "\n------------0-------------" << endl;
        cout << "option 1: Insert at head " << endl;
        cout << "option 2: Print linked list" << endl;
        cout << "option 3: Insert at any position " << endl;
        cout << "option 4: Insert at tail " << endl;
        cout << "option 5: Delete from position " << endl;
        cout << "option 6: Delete head " << endl;
        cout << "option 7: Exit " << endl;
        int op;
        cout << "\nEnter your option: ";
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
            print_linked_list(head);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter pos: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
                print_linked_list(head);
            }
            else
            {
                intsert_at_any_position(head, pos, v);
                print_linked_list(head);
            }
        }
        else if (op == 4)
        {
            cout << "please enter a value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
            print_linked_list(head);
        }
        else if (op == 5)
        {
            int pos;
            cout << "enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
                print_linked_list(head);
            }
            else
            {
                delete_from_position(head, pos);
                print_linked_list(head);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
            print_linked_list(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}