/*Suppose we are working on an application in C language
and there is one value or an object or segment of code which we require so many times in our code 
then with the help of macros we can define it once and use it many times.
Macros are one of the convenient ways to write robust and scalable code.
The macro in C language is known as the piece of code which can be replaced by the macro value. 
The macro is defined with the help of #define preprocessor directive and the macro doesn’t end with a semicolon(;). 
Macro is just a name given to certain values or expressions it doesn't point to any memory location.*/

#include <stdio.h>

#define PI 3.14

void main(){

    int radius = 5;
    float area = PI * (radius*radius);

    printf("Area of the circle is %f", area); 
}
