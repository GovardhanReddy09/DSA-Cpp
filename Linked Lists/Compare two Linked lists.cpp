int compare_lists(SinglyLinkedListNode *l1,SinglyLinkedListNode *l2)
{
    while(l1!=nullptr && l2!=nullptr && (l1->data==l2->data))
    {
        l1=l1->next;
        l2=l2->next;
    }
    if(l1==nullptr && l2==nullptr)
    return 1;
    else
    return 0;
}
