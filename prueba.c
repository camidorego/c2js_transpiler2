#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcddcba";
    int length = 1.67;
    int flag = 1;
    const int pi=3.1415;
    int matrix[2][3]={{1,2,3},{1,2,3}};
    char arr3[]={"a","b","c"};
    char arr2[3];
    int arr4[4]={1,2,3,4};
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