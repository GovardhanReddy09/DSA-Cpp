// Singly linked List
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
Node *head=NULL;
Node *tail=NULL;
void insert_end(int val)
{
    Node *newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        Node *temp=head;
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_begin(int val)
{
    Node *newnode=new Node(val);
    if(head==NULL)
    {
        head =newnode;
        tail=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void print_list()
{
    Node *temp=head;
    if(head==NULL)
    {
        cout<<"empty list\n";
    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
}
void del_end()
{
    if(head!=NULL)
    {
        Node *temp=head;
        if(head==tail)
        {
            head=NULL;
            tail=NULL;
        }
        else
        {
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            tail=temp;
            temp=temp->next;
            tail->next=NULL;
        }
        free(temp);
    }
}
void del_begin()
{
    if(head!=NULL)
    {
        Node *temp=head;
        if(head==tail)
        {
            head=NULL;
            tail=NULL;
        }
        else
        {
            head=temp->next;
            temp->next=NULL;
        }
        free(temp);
    }
    
}
void insert_before(int ref,int val)
{
    if(head!=NULL)
    {
        if(ref==head->data)
        {
             insert_begin(val);
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL && temp->next->data!=ref)
            {
                temp=temp->next;
            }
            if(temp->next == NULL)
            {
                return;
            }
            Node *newnode=new Node(val);
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
}
void insert_after(int ref,int val)
{
    if(head!=NULL)
    {
        if(ref==tail->data)
        {
             insert_end(val);
        }
        else
        {
            Node *temp=head;
            while(temp!=NULL && temp->data!=ref)
            {
                temp=temp->next;
            }
            if(temp == NULL)
            {
                return;
            }
            Node *newnode=new Node(val);
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
}
int main()
{
    int n,val,ref;
    while(true){
        cout<<"EXIT-0\n";
        cout<<"insert_begin-1\n";
        cout<<"insert_end-2\n";
        cout<<"print_list-3\n";
        cout<<"delete_end-4\n";
        cout<<"delete_begin-5\n";
        cout<<"insert_before-6\n";
        cout<<"insert_after-7\n";
        cin>>n;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            cin>>val;
            insert_begin(val);
        }
        else if(n==2)
        {
            cin>>val;
            insert_end(val);
        }
        else if(n==3)
        {
            print_list();
        }
        else if(n==4)
        {
            del_end();
        }
        else if(n==5)
        {
            del_begin();
        }
        else if(n==6)
        {
            cin>>ref>>val;
            insert_before(ref,val);
        }
        else if(n==7)
        {
            cin>>ref>>val;
            insert_after(ref,val);
        }
    }
    
}
