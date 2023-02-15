#include <stdio.h>

void main(){
    float pie = 3.14;
    float *ptr = &pie;

    printf("using variable: %p\n", &pie);
    printf("using pointer: %p\n", ptr);
    printf("addres of pointer: %p\n", &ptr);
}