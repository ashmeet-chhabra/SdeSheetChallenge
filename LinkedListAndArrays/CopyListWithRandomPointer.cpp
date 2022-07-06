// brute

// LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
// {
//     // Write your code here.
//     map<LinkedListNode<int>*, LinkedListNode<int>*> mp;
//     LinkedListNode<int> *temp = head;
    
//     while(temp != NULL)
//     {
//         mp[temp] = new LinkedListNode<int>(temp -> data);
//         temp = temp -> next;
//     }
    
//     temp = head;
    
//     while(temp != NULL)
//     {
//         mp[temp] -> next = mp[temp -> next];
//         mp[temp] -> random = mp[temp -> random];
//         temp = temp -> next;
//     }
    
//     return mp[head];
// }

// optimized

