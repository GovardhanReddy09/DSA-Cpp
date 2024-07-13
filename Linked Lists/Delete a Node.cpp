SinglyLinkedListNode* deleteNode(SinglyLinkedListNode *l,int ind){
    SinglyLinkedListNode *head=l;
    if(ind==0)
    {
        SinglyLinkedListNode *temp=head;
        head=temp->next;
        temp->next=nullptr;
    }
    else{
        SinglyLinkedListNode *temp=head;
        SinglyLinkedListNode *prev=head;
        int c=0;
        while(c<ind && temp->next!=nullptr)
        {
            prev=temp;
            temp=temp->next;
            c++;
        }
        prev->next=temp->next;;
        temp->next=nullptr;
    }
    return head;
}
