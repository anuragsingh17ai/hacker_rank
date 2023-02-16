//Just logic....
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    SinglyLinkedListNode *head=llist;
    
    if(!position) return llist->next;

    while(llist && --position)
        llist=llist->next;
    
    if(!llist->next) return NULL;
    llist->next=llist->next->next;
    
    return head;

}
