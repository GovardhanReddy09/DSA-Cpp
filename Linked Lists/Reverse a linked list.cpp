SinglyLinkedListNode *reverse(SinglyLinkedListNode *l)
{
    SinglyLinkedListNode* a=nullptr;
    SinglyLinkedListNode* head=l;
    SinglyLinkedListNode* b=nullptr;
    while(head!=nullptr)
    {
        b=head->next;
        head->next=a;
        a=head;
        head=b;
    }
    return a;
}
