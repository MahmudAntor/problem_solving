#include<cstdio>
#include <string>

std::string time(int i, int temp)
{
    if(i==0)
    {
        if(temp>1)
            return "years";
        return "year";
    }
    if(i==1)
    {
        if(temp>1)
            return "days";
        return "day";
    }
    if(i==2)
    {
        if(temp>1)
            return "hours";
        return "hour";
    }
    if(i==3)
    {
        if(temp>1)
            return "minutes";
        return "minute";
    }
    if(i==4)
    {
        if(temp>1)
            return "seconds";
        return "second";
    }
}

std::string format_duration(int seconds)
{
    if(seconds==0)
        return "now";
    std::string result="";
    int flag=0, time_stamp[6];
    time_stamp[0]=seconds/31536000; //year
    time_stamp[1]=seconds/86400;    //day
    time_stamp[2]=seconds/3600;     //hour
    time_stamp[3]=seconds/60;       //minute
    time_stamp[4]=seconds%60;       //second

    if(time_stamp[1]>364)
        time_stamp[1] %= 365;
    if(time_stamp[2]>23)
        time_stamp[2] %= 24;
    if(time_stamp[3]>59)
        time_stamp[3] %= 60;

    for(int i=0; i<5; i++)
    {
        if(time_stamp[i]>0)
            flag++;
    }
    char* x = new char[2000];
    std::string temp;
    for(int i=0; i<5; i++)
    {
        if(time_stamp[i]>0 && flag>2)
        {
            std::string temp = {time(i, time_stamp[i])};
            sprintf(x, "%d %s, ",time_stamp[i], temp.c_str() );
            result += x;
            flag--;
        }
        else if(time_stamp[i]>0 && flag<=2)
        {
            std::string temp = {time(i, time_stamp[i])};
            if(flag==1)
            {
                sprintf(x, "%d %s",time_stamp[i], temp.c_str() );
                result += x;
                return result;
            }
            sprintf(x, "%d %s and ",time_stamp[i], temp.c_str() );
            result += x;
            flag--;

        }
    }

    return result;
}