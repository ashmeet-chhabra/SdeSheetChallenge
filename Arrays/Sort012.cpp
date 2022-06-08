#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    // counting frequencies of digits
    
//    int zero = 0, one = 0, two = 0;
    
//    for(int i=0; i<n; ++i)
//    {
//        if(arr[i] == 0)
//            zero++;
//        else if(arr[i] == 1)
//            one++;
//        else
//            two++;
//    }
    
//     for(int i=0; i<zero; i++)
//         arr[i] = 0;
//     for(int i=zero; i<zero+one; i++)
//         arr[i] = 1;
//     for(int i=zero+one; i<zero+one+two; i++)
//         arr[i] = 2;
    
    // dutch national flag algorithm
    
    int zero = 0, one = 0, two = n-1;
    
    while(one <= two)
    {
        if(arr[one] == 0)
        {
            swap(arr[one], arr[zero]);
            zero++, one++;
        }
        else if(arr[one] == 1)
            one++;
        else
        {
            swap(arr[one], arr[two]);
            two--;
        }
    }
}
