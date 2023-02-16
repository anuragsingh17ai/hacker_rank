//just logic to add data at end.......
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode *temp=new SinglyLinkedListNode(data);
    
    if(!head) return temp;
    
    SinglyLinkedListNode *header=head;
    while(header->next)
        header=header->next;
        
   header->next=temp;
    
    return head;
}
