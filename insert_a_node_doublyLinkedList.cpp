// just logic.........
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode *temp=new DoublyLinkedListNode(data),*head=llist;
    
    if(!llist) return temp;
    
    else if(llist->data>data)
    {
        temp->next=llist;
        llist->prev=temp;
        return temp;
    }
    
    while (llist->next && llist->next->data<data ) 
            llist=llist->next;
    
    if(!llist->next)
    {
        temp->prev=llist;
        llist->next=temp;
        return head;
    }
    temp->prev=llist;
    temp->next=llist->next;
    llist->next->prev=temp;
    llist->next=temp;
    return head;
    
}
