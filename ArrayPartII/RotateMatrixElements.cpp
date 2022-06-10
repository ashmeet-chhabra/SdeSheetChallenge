#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int r = 0, c = 0;
    int row = n-1, col = m-1;
    int prev, curr; 
    
    while(r < row && c < col)
    {
        prev = mat[r+1][c];
        
        for(int i = c; i <= col; ++i)
        {
            curr = mat[r][i];
            mat[r][i] = prev;
            prev = curr;
        }
        
        r++;
        
        for(int i = r; i <= row; ++i)
        {
            curr = mat[i][col];
            mat[i][col] = prev;
            prev = curr;
        }
        
        col--;
                 
        for(int i = col; i >= c; --i)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        
        row--;
        
        for(int i = row; i >= r; --i)
        {
            curr = mat[i][c];
            mat[i][c] = prev;
            prev = curr;
        }
        
        c++;
    }
}
