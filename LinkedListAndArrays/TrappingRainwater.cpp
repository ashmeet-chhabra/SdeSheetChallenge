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

long getTrappedWater(long *arr, int n){
    
    long water = 0;
    long l = 0, r = n - 1;
    long leftMax = 0, rightMax = 0;
        
    while(l < r)
    { 
        if(arr[l] <= arr[r])
        {
            if(arr[l] > leftMax)
                leftMax = arr[l];
            else
                water += leftMax - arr[l];
            l++;
        }
        else
        {
            if(arr[r] > rightMax)
                rightMax = arr[r];
            else
                water += rightMax - arr[r];
            r--;
        }
    }
    
    return water;
}
