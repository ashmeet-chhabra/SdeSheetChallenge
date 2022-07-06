#include <bits/stdc++.h> 

// brute 
// long getTrappedWater(long *arr, int n){
    
//     long water = 0;
    
//     long prefMax[n], suffMax[n];
//     prefMax[0] = arr[0];
//     suffMax[n - 1] = arr[n - 1];
    
//     for(int i = 1; i < n; ++i)
//         prefMax[i] = max(arr[i], prefMax[i - 1]);
    
//     for(int i = n - 2; i >= 0; --i)
//         suffMax[i] = max(arr[i], suffMax[i + 1]);
        
//     for(int i = 0; i < n; ++i)
//     { 
//         long c = min(prefMax[i], suffMax[i]);
        
//         if(c > arr[i])
//             water += c - arr[i];
//     }
    
//     return water;
// }

// optimized

