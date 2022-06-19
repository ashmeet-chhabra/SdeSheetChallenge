#include <bits/stdc++.h>

typedef long long ll;

ll mergeSort(vector<int> &arr, ll temp[], int start, int end);
ll merge(vector<int> &arr, ll temp[], int start, int mid, int end);

ll reversePairs(vector<int> &arr, int n){
    // Write your code here.
    ll temp[n];
    
    return mergeSort(arr, temp, 0, n-1);
}

ll mergeSort(vector<int> &arr, ll temp[], int start, int end)
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

ll merge(vector<int> &arr, ll temp[], int start, int mid, int end)
{
    ll count = 0;
    
    int i, j = mid, k = start;
    
    for(i = start; i < mid; ++i)
    {
        while(j <= end && arr[i] > 2 * arr[j])
            j++;
        count += j - mid; 
    }
    
    i = start, j = mid;
    
    while(i <= mid - 1 && j <= end)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    
    while(i <= mid - 1)
        temp[k++] = arr[i++];
    while(j <= end)
        temp[k++] = arr[j++];
    
    for(i = start ; i <= end ; i++)
        arr[i] = temp[i];
    
    return count;
    
}
