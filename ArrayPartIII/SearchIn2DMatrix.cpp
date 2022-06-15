#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int nn = m*n - 1; 
    int low = 0, high = nn, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        
        if(mat[mid/n][mid%n] == target)
            return true;
        else if(mat[mid/n][mid%n] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    return false;
}
