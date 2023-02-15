#include <stdio.h>
int main(){
    int a;
    int b; 
    int c;

    do
    {
        printf("ingresar valor entero:\n");
        scanf("%d", &a);
        printf("ingresar segundo valor entero:\n");
        scanf("%d", &b);
        printf("ingresar tercer valor entero:\n");
        scanf("%d", &c);
    } while (a==b || a==c || b==c);

    printf("\n resultado:\n");

    if (a > b && a > c)
    {
        printf("%d es el mayor", a);
    }
    else if (b > a && b > c)
    {
        printf("%d es el mayor", b);
    }
    else{
        printf("%d es el mayor", c);
    }
    
    return 0;


    
}