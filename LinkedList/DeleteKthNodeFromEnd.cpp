LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    
    if(K == 0)
        return head;
    
    LinkedListNode<int> *start = new LinkedListNode<int>(0);
    start -> next = head;
    LinkedListNode<int> *temp1 = start, *temp2 = start;
    
    while(K--)
        temp2 = temp2 -> next;
    
    while(temp2 -> next != NULL)
    {
        temp2 = temp2 -> next;
        temp1 = temp1 -> next;
    }
    
    temp1 -> next = temp1 -> next -> next;
    
    return start -> next;    
}
