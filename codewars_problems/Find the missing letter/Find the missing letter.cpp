
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* group_by_commas(int n) {

    char* array = (char*)malloc(sizeof(char)*100);
    //memset(array,'\0',sizeof(array));
    if (array == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    int i = 0, flag = 0;
    while(n)
    {
        flag++;
        array[i] = (char)((n%10)+48);
        n /= 10;
        i++;
        if(flag%3 == 0 && n)
        {
            array[i] = ',';
            i++;
        }
    }
    array[i]='\0';
    //printf("%s\n", array);
    int temp,revIndex = 0;
    int arrIndex = strlen(array) - 1;
    while(revIndex < arrIndex)
    {
        temp = array[revIndex];
        array[revIndex] = array[arrIndex];
        array[arrIndex] = temp;

        revIndex++;
        arrIndex--;
    }

    return array;
}