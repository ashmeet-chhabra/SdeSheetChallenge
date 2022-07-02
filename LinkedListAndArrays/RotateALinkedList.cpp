Node *rotate(Node *head, int k) {
     // Write your code here.
    Node *temp = head;
    int count = 1;
    
    while(temp -> next != NULL)
    {
        temp = temp -> next;
        count++;
    }
    
    temp -> next = head;
    
    if(k > count)
        k = k % count;
    
    k = count - k;
    
    while(k--)
        temp = temp -> next;
    
    head = temp -> next;
    temp -> next = NULL;
    
    return head;
}
