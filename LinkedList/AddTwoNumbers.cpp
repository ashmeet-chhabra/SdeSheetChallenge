#include <bits/stdc++.h> 

void insert(Node *tail, int sum);

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *head = new Node(0), *tail = head;
    int sum, carry = 0;
    
    while(head1 != NULL || head2 != NULL || carry)
    {
        sum = carry;
        
        if(head1 != NULL)
        {
           sum += head1 -> data;
           head1 = head1 -> next;
        }
        
        if(head2 != NULL)
        {
            sum += head2 -> data;
            head2 = head2 -> next;
        }
        
        carry = sum / 10;
        sum %= 10;
        
        insert(tail, sum);
        tail = tail -> next;
    }
    
    return head -> next;
}

void insert(Node *tail, int sum)
{
    Node *temp = new Node(sum);
    tail -> next = temp;
}
