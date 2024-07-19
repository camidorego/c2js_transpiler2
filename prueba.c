#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcddcba";
    int length = 1;
    int flag = 1;

    while(flag<10){
        flag++;
        printf(flag);
    }

    if (flag == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return flag;
}