#include <bits/stdc++.h> 

int uniquePaths(int m, int n, vector<vector<int>>& mat);

int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>> mat(m, vector<int>(n, -1));
    
    return uniquePaths(m-1, n-1, mat);
}

int uniquePaths(int i, int j, vector<vector<int>>& mat)
{
    int count = 0;
    
    if(i < 0 || j < 0)
        return 0;
    
    if(i == 0 && j == 0)
        return 1;
    
    if(mat[i][j] != -1)
        return mat[i][j];
    
    count += uniquePaths(i, j - 1, mat);
    count += uniquePaths(i - 1, j, mat);
    
    mat[i][j] = count;
    
    return count;
}
