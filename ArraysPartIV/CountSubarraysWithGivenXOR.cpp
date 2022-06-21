#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int XOR = 0, count = 0, n = arr.size();
    unordered_map<int, int> mp;
    
    for(int i = 0; i < n; ++i)
    {
        XOR ^= arr[i]; 
        
        if(XOR == x)
            count++;
        
        if(mp.find(XOR ^ x) != mp.end())
            count += mp[XOR ^ x];
        
         mp[XOR]++;
    }
    
    return count;
}
