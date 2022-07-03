int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int ktemp = k;
    int i = 0, j = 0;
    int max = -1e5, len;
    
    while(j < n && i < n)
    {
        if(arr[j] == 1)
            j++;
        else if(ktemp > 0)
        {
            ktemp--;
            j++;
        }
        else
        {
            len = j - i;
            max = max > len ? max : len;
            if(arr[i] == 0)
                ktemp++;
            i++;
        } 
    }
    
    len = j - i;
    max = max > len ? max : len;
    
    return max;
}
