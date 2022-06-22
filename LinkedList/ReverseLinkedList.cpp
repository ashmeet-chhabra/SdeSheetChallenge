
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head -> next == NULL)
            return head;
        
        
    LinkedListNode<int> *prev = NULL, *curr = head, *next = curr -> next;
        
    while(curr != NULL)
    {
        curr -> next = prev;    
        prev = curr;
        curr = next;
            
        if(curr == NULL)
            break;
            
        next = next -> next;
    }
        
    return prev;   
    
}
