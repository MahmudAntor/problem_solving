#include<stdio.h>
#include<string.h>
#include <stdbool.h>

bool validParentheses(const char* strin) {
    int i = 0, len, cnt = 0;
    len = strlen(strin);
    if(len == 0)
        return true;

    for(i; i < len; i++)
    {
        if(cnt < 0)
        {
            return false;
        }
        if(strin[i] == '(')
        {
            cnt++;
        }
        if(strin[i] == ')')
        {
            cnt--;
        }
    }
    if(cnt == 0)
    {
        return true;
    }
    else
        return false;

}