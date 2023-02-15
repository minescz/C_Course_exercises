#include<stdio.h>
#include<string.h>

int main (void)
{
    char str[]= "Connie is learning C";
    printf  ("%s \n", str);
    int len = strlen (str);
    for (int i = 0; i < len; i++)
    {
        putchar('-');
    }
     putchar('\n');
     return 0;
}
