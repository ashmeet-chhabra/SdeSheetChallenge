vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    sort(arr.begin(), arr.end());
    vector<vector<int>> v;
    int i = 0;
    
    while(i < n - 2)
    {
        int j = i + 1, k = n - 1;
        int rem = K - arr[i];
        while(j < k && k < n)
        {
            int sum = arr[j] + arr[k];
            if(sum > rem)
                k = moveBackward(arr, k);
            else if(sum < rem)
                j = moveForward(arr, j);
            else
            {
                v.push_back({arr[i], arr[j], arr[k]});
                j = moveForward(arr, j);
                k = moveBackward(arr, k);
            }
        }
        i = moveForward(arr, i);
    }
    return v;
}

int moveForward(vector<int>& arr, int j)
{
    for(int i = j + 1; ; i++)
        if(arr[i] != arr[j])
            return i;
}

int moveBackward(vector<int>& arr, int k)
{
    for(int i = k - 1; ; i--)
        if(arr[i] != arr[k])
            return i;
}
