#include <stdio.h>

int main(){
    int a;
    int b;
    do
    {   
        printf("Insert value other than 0:\n");
        scanf("%d", &a);
        printf("Insert 2nd value other than 0:\n");
        scanf("%d", &b);
        
    } while (a == b);

    if (a > b){
        printf("%d is greater than %d", a, b);
    }

    else{
        printf("%d is greater than %d", b, a);
}
}