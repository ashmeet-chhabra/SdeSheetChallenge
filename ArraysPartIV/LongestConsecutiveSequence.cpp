#include <bits/stdc++.h> 
long long lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    long long length = 1;
    long long ans = INT_MIN;
    
    if(n == 1)
        return 1;
    
    sort(arr.begin(), arr.end());
    
    for(int i = 1; i < n; ++i)
    {
        if(arr[i] == arr[i-1]);
        else if(arr[i] == (arr[i-1] + 1))
            length++;
        else
        {
            ans = max(ans, length);
            length = 1;
        }
    }
    
    ans = max(ans, length);
    
    return ans;
}
