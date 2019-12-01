#include<stdio.h>
#include <stddef.h>

char *rot13(const char *src)
{
    int i,size_src = strlen(src) + 1;
    char *dest = (char*)malloc(size_src);
    memcpy(dest, src, strlen(src)+1);
    for(i=0; i<size_src; i++)
    {
        if(dest[i] >= 65 && dest[i] <=90)
        {
            dest[i] = dest[i]+13;
            if(dest[i]>90)
            {
                dest[i] = 64 + (dest[i] - 90);
            }
        }
        else if(dest[i] >= 97 && dest[i] <=122)
        {

            dest[i] = dest[i]+13;
            if(dest[i]>122)
            {
                dest[i] = 96 + (dest[i] - 122);
            }
            else if(dest[i]<0)
            {
                dest[i] = 97 + (dest[i] + 128+5);
            }
        }
    }
    return dest;
}