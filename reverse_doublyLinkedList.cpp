//just logic but bit confuse...........
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
   DoublyLinkedListNode *curr = head,*prev = NULL;
    
    if(head==NULL || head->next==NULL) return head;
    
    while(curr!=NULL){
        prev = curr->prev;    //Swapping
        curr->prev = curr->next;
        curr->next = prev;
        
        curr = curr->prev;
    }

    return prev->prev;
        
}
