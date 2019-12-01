#include <stddef.h>
#include<math.h>
#include<stdio.h>

int mx(int a, int b)
{
  if(a>b) return a;
  else return b;
}
int maxSequence(const int* array, size_t n) {

    int local_max = 0, global_max = -2343554, i=0;
    for(i=0; i<n; i++)
    {
      local_max = mx(array[i], array[i]+local_max);
      if(local_max > global_max)
        global_max = local_max;
    }
    if(global_max < 0) return 0;
    return global_max;
}