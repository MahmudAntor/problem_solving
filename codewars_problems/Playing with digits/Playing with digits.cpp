int power(int number, int base)
{
    int result = 1;
    while(base)
    {
        result *= number;
        base--;
    }
    return result;
}
int digPow(int n, int p)
{
  int temp = n, cnt = 0, result=0;
  while(temp != 0)
  {
      temp /= 10;
      cnt++;
  }
  temp = n;
  while(temp)
  {
    result += power((temp%10), p+cnt-1);
    temp /= 10;
    cnt--;

  }
  if(result%n == 0)
    return result/n;
  else
    return -1;
}