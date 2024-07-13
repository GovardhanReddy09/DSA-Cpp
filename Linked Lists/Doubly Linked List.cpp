//Doubly Linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node *head=NULL;
Node *tail=NULL;
void Insert_End(int value)
{
    Node *newnode=new Node(value);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void Insert_Front(int value)
{
    Node *newnode=new Node(value);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode->next = head;
        head->prev =newnode;
        head=newnode;
    }
}

void Delete_End()
{
    if(head !=NULL)
    {
        Node *temp=tail;
        if(head == tail)
        {
            head=NULL;
            tail=NULL;
        }
        else
        {
            tail=tail->prev;
            tail->next=NULL;
            temp->prev=NULL;
        }
        free(temp);
    }
}

void Delete_Front()
{
    if(head !=NULL)
    {
        Node *temp=head;
        if(head == tail)
        {
            head=NULL;
            tail=NULL;
        }
        else
        {
            head=head->next;
            head->prev=NULL;
            temp->next=NULL;
        }
        free(temp);
    }
}

void Insert_After(int refer, int value)
{
    if(head!=NULL)
    {
        if(refer == tail->data)
        {
            Insert_End(value);
        }
        else
        {
            Node *temp=head;
            while(temp != NULL && temp->data != refer)
            {
                temp=temp->next;
            }
            if(temp==NULL)
            {
                return;
            }
            Node *newnode=new Node(value);
            newnode->next=temp->next;
            temp->prev=newnode;
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
}
void Insert_Before(int refer, int value)
{
    if(head!=NULL)
    {
        if(refer == head->data)
        {
            Insert_Front(value);
        }
        else
        {
            Node *temp=head;
            while(temp->next != NULL && temp->next->data != refer)
            {
                temp=temp->next;
            }
            if(temp->next == NULL)
            {
                return;
            }
            Node *newnode=new Node(value);
            newnode->next=temp->next;
            temp->next->prev=newnode;
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
}

void Search_delete(int value)
{
	if(head != NULL)
	{
		if(value == head->data )
		{
			Delete_Front();
		}
		else if(value == tail->data)
		{
			Delete_End();
		}
		else
		{
			Node *temp=head;
			while(temp != NULL && temp->data != value)
			{
				temp=temp->next;
			}
			if(temp == NULL)
            {
                return;
            }
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			temp->next=NULL;
			temp->prev=NULL;
			free(temp);
		}
	}
}

void Print_List()
{
    if(head == NULL)
    {
        cout<<"Empty\n";
    }
    else
    {
        Node *temp=head;
        cout<<"NULL ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
}
void Print_List_Reverse()
{
    if(head == NULL)
    {
        cout<<"Empty\n";
    }
    else
    {
        Node *temp=tail;
        cout<<"NULL ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" <=> ";
            temp=temp->prev;
        }
        cout<<"NULL\n";
    }
}

int main()
{
    int n,val,ref;
    while(true){
        cout<<"EXIT-0\n";
        cout<<"print list -1\n";
        cout<<"print list Reverse -2\n";
        cout<<"Insert_End -3\n";
        cout<<"Insert_Front -4\n";
        cout<<"Delete_Front -5\n";
        cout<<"Delete_End -6\n";
        cout<<"Insert_After -7\n";
        cout<<"Insert_before -8\n";
        cout<<"search and delete -9\n";
        cin>>n;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            Print_List();
        }
        else if(n==2)
        {
             Print_List_Reverse();
        }
        else if(n==3)
        {
            cin>>val;
            Insert_End(val);
        }
        else if(n==4)
        {
            cin>>val;
            Insert_Front(val);
        }
        else if(n==5)
        {
            Delete_Front();
        }
        else if(n==6)
        {
            Delete_End();
        }
        else if(n==7)
        {
            cin>>ref>>val;
            Insert_After(ref,val);
        }
        else if(n==8)
        {
            cin>>ref>>val;
            Insert_Before(ref,val);
        }
        else if(n==9)
        {
            cin>>val;
            Search_delete(val);
        }
    }
    
}
