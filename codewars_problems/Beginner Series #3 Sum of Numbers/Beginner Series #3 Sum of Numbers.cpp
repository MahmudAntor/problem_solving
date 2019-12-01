int get_sum(int a , int b) {
    int i, temp;
    if(a > b)
    {
      temp = a;
      a = b;
      b = temp;
    }
    if(a == b)
      return a;
    else
    temp = 0;
    for(i = a; i <= b; i++)
    {
      temp += i;
    }
    return temp;
}