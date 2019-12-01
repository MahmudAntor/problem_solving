namespace Triangle
{
  bool isTriangle(long long a, long long b, long long c)
  {
  
    if (a + b <= c || a + c <= b || b + c <= a) 
        return false; 
    else return true;
  }
};