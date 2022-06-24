#include <bits/stdc++.h> 

int difference(Node *firstHead, Node *secondHead);

int findIntersection(Node *firstHead, Node *secondHead)
{
    if (firstHead == NULL || secondHead == NULL)
        return -1;

    int diff = difference(firstHead, secondHead);

    if (diff < 0)
        while (diff++ != 0)
            secondHead = secondHead->next;
    else
        while (diff-- != 0)
            firstHead = firstHead->next;

    while (firstHead != NULL)
    {
        if (firstHead == secondHead)
            return firstHead->data;

        secondHead = secondHead->next;
        firstHead = firstHead->next;
    }

    return -1;
}

int difference(Node *firstHead, Node *secondHead)
{
    int l1 = 0, l2 = 0;

    while (firstHead != NULL || secondHead != NULL)
    {
        if (firstHead != NULL)
        {
            firstHead = firstHead->next;
            l1++;
        }
        if (secondHead != NULL)
        {
            secondHead = secondHead->next;
            l2++;
        }
    }

    return l1 - l2;
}
