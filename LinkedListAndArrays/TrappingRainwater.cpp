// brute 

// long getTrappedWater(long *arr, int n){
    
//     long water = 0, a = INT_MIN;
//     long suffMax[n];
//     suffMax[n - 1] = arr[n - 1];
    
//     for(int i = n - 2; i >= 0; --i)
//         suffMax[i] = max(arr[i], suffMax[i + 1]);
        
//     for(int i = 0; i < n; ++i)
//     { 
//         if(i != 0)
//             a = max(arr[i - 1], a);
            
//         long c = min(a, suffMax[i]);
        
//         if(c > arr[i])
//             water += c - arr[i];
//     }
    
//     return water;
// }

// optimized

