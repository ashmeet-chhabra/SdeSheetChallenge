// brute force

// #include <bits/stdc++.h> 

// int uniquePaths(int i, int j, int m, int n);

// int uniquePaths(int m, int n) {
// 	// Write your code here.
    
//     int i = 0, j = 0;
    
//     return uniquePaths(i, j, m, n);
// }

// int uniquePaths(int i, int j, int m, int n)
// {
//     int count = 0;
    
//     if(i >= m || j >= n)
//         return 0;
    
//     if(i == m-1 && j == n-1)
//         return 1;
    
//     count += uniquePaths(i, j + 1, m, n);
//     count += uniquePaths(i + 1, j, m, n);
    
//     return count;
// }

// dynamic programming

// #include <bits/stdc++.h> 

// int uniquePaths(int i, int j, int m, int n, vector<vector<int>> mat);

// int uniquePaths(int m, int n) {
// 	// Write your code here.
//     int i = 0, j = 0;
    
//     vector<vector<int>> mat(m, vector<int>(n, -1));
    
//     return uniquePaths(i, j, m, n, mat);
// }

// int uniquePaths(int i, int j, int m, int n, vector<vector<int>> mat)
// {
//     int count = 0;
    
//     if(i >= m || j >= n)
//         return 0;
    
//     if(i == m-1 && j == n-1)
//         return 1;
    
//     if(mat[i][j] != -1)
//         return mat[i][j];
    
//     count += uniquePaths(i, j + 1, m, n, mat);
//     count += uniquePaths(i + 1, j, m, n, mat);
    
//     mat[i][j] = count;
    
//     return count;
// }

// optimal solution - combinatorics



