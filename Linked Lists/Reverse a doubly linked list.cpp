DoublyLinkedListNode *reverse(DoublyLinkedListNode *l)
{
    DoublyLinkedListNode* a=nullptr;
    DoublyLinkedListNode* head=l;
    DoublyLinkedListNode* b=nullptr;
    while(head!=nullptr)
    {
        b=head->next;
        head->next=a;
        a=head;
        head=b;
    }
    return a;
}

