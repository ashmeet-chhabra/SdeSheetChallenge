#include <bits/stdc++.h> 

typedef long long ll;

long long maxSubarraySum(int arr[], int n)
{   
    if(n == 0)
        return arr[0];
    
    ll sum = 0, max_sum = INT_MIN;
    
    for(int i = 0; i < n; ++i)
    {
        sum += arr[i];
        max_sum = max(sum, max_sum);
        
        if(sum < 0)
            sum = 0;
    }
    if(sum == 0)
        return 0;
    
    return max_sum;
}
