#include <math.h>
bool narcissistic( int value ){
  int temp = value;
  int res = 0;
  int sze=0;
  while(value)
  {
    sze++;
    value /= 10;
  }
  value = temp;
  while(value)
  {
    res += (int)(pow(value%10, sze) + 0.5);
    value /= 10;
  }
  if(res == temp) return 1;
  return 0;
}