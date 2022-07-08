int findMinimumCoins(int amount) 
{
    int currency[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = sizeof(currency)/sizeof(currency[0]);
    int count = 0;
    
    int i = 0;
    while(currency[i] <= amount && i < n)
        i++;
    i--;
    
    while(amount > 0)
    {
        count += amount / currency[i];
        amount = amount % currency[i];
        i--;
    }
    
    return count;
}        
