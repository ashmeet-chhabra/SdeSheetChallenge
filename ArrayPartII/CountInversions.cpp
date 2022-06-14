#include <bits/stdc++.h>

typedef long long ll;

ll mergeSort(ll *arr, ll temp[], int start, int end);
ll merge(ll *arr, ll temp[], int start, int mid, int end);

ll getInversions(ll *arr, int n){
    // Write your code here.
    ll temp[n];
    
    return mergeSort(arr, temp, 0, n-1);
}

ll mergeSort(ll *arr, ll temp[], int start, int end)
{
    ll count = 0;
    
    if(start < end)
    {
        int mid = (start + end)/2;
    
        count += mergeSort(arr, temp, start, mid); 
        count += mergeSort(arr, temp, mid + 1, end);
        count += merge(arr, temp, start, mid + 1, end);
    }
    
    return count;
}

ll merge(ll *arr, ll temp[], int start, int mid, int end)
{
    ll count = 0;
    int i = start, j = mid, k = start;
    
    while(i <= mid - 1 && j <= end)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];
            count += mid - i;
        }
    }
    
    while(i <= mid - 1)
        temp[k++] = arr[i++];
    while(j <= end)
        temp[k++] = arr[j++];
    
    for(i = start ; i <= end ; i++)
        arr[i] = temp[i];
    
    return count;
    
}
