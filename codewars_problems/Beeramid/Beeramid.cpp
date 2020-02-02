int level_calc(int n)
{
    return ((n*(n+1)*(2*n+1))/6);
}

int beeramid(int bonus, double price)
{
    int n=1, total_can = bonus / price;
    if(total_can < 1)
        return 0;
    while(level_calc(n) <= total_can)
    {
        n++;
    }
    if(level_calc(n)>total_can)
        return --n;
    else return n;
}