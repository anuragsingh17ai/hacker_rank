//just logic ........
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    
    temp->next=llist;
    
    return temp;
    
    
}
