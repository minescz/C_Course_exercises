/*A pointer to a pointer is a form of multiple indirection, or a chain of pointers. 
Normally, a pointer contains the address of a variable. 
When we define a pointer to a pointer, the first pointer contains the address of the second pointer, 
which points to the location that contains the actual value */


#include <stdio.h>

int main(){
    int var;
    int *ptr;
    int **pptr;

    var= 3000;
    ptr= &var;
    pptr= &ptr;

    printf("the value of var: %d\n", var);
    printf("the value of ptr: %d\n", *ptr);
    printf("the value of pptr: %d\n", **pptr);

    return 0;
}