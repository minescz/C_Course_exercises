#include<stdio.h>
#include<string.h>

int main(void) 
{
    char password[20];
    printf("please enter the password: \n");
    scanf("%19s", password);

    if(strcmp(password, "q1w2e3r4")== 0)
    {
        printf("Correct password! :D\n");
    }else{
        printf("Wrong password! :c \n");
    }

    return 0;
}