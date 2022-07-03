// brute force

// int removeDuplicates(vector<int> &arr, int n) {
// 	// Write your code here.
//     map<int, int> mp;
    
//     for(int i: arr)
//         mp[i]++;
    
//     return mp.size();
// }

// optimized (making use of the array being sorted)

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int count = 1;
    
    for(int i = 0, j = 0; (i < n && i < n); ++i)
        if(arr[i] != arr[j])
        {
            count++;
            j = i;
        }
    
    return count;
}

