//Just logic.....
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode *temp=new SinglyLinkedListNode(data),*head=llist;
    
    
    while (llist && --position) {
        llist=llist->next;
    
    
    }
    
    
    temp->next=llist->next;
    llist->next=temp;
    
    return head;
}
