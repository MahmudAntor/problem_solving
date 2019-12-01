#include<stdio.h>
#include<math.h>
#include <stdbool.h>

bool validate(long digits) {
    int i, temp, digit_no =  (int)(1+floor(log10(digits)));
    long sum = 0;

    for(i = 1; i <= digit_no; i++)
    {

        if(i%2 == 0)
        {
            temp = 2*(digits%10);
            if(temp > 9)
            {
                sum += temp - 9;
            }
            else
            {
                sum += temp;

            }
        }
        else
            sum += digits%10;
        digits /= 10;


    }
    if(sum%10 == 0)
        return true;
    else
        return false;

}