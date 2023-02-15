#include<stdio.h>

int main(void)
{
    int i = 64;
    while (i == 64)
    {
        printf("please entenr a number (enter a value different from 64 to quit):");
        scanf("%d",&i);

        printf ("You entered: %d\n\n", i);
    }
     printf("***loop terminated***");

     return 0;
}