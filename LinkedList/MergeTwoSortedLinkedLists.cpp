#include <bits/stdc++.h> 

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int> *head = new Node<int>(0), *tail = head;
 
    while(first != NULL && second != NULL)
    {
        if(first -> data <= second -> data)
        {
            tail -> next =  first;
            first = first -> next;
        }
        else
        {
            tail -> next = second;
            second = second -> next;
        }
        tail = tail -> next;
    }
    
    if(first != NULL)
        tail -> next = first;
    else
        tail -> next = second;
    
    return head -> next;
}
