#include<stdio.h>

int countDeafRats(const char *town)
{
    int i, p_pos=-1, deaf=0;
    for(i=0; i<strlen(town); i++)
    {
        if(town[i]=='P')
        {
            p_pos = i;
            break;
        }
    }
    for(i=0; i<p_pos; i++)
    {
        if(town[i]==' ')
        {
            continue;
        }
        if(town[i]=='~')
        {
            i++;
            continue;
        }
        if(town[i]=='O')
        {
            i++;
            deaf++;

        }
    }
     for(i=p_pos+1; i<strlen(town); i++)
    {
        if(town[i]==' ')
        {
            continue;
        }
        if(town[i]=='O')
        {
            i++;
            continue;
        }
        if(town[i]=='~')
        {
            i++;
            deaf++;

        }
    }
    return deaf;
}