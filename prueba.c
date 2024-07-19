int main(int a, int b) {
    char str[] = "abcddcba";
    int flag = 1;
    const int hola=3;
    int arr[]={1,2,3};
    int matrix[1][3]={{1,2,3},{1,2,3}};

    if (flag != 1)
    {
        printf("True\n");
    }
    else{
        printf("False");
    }
    while(flag<10){
        flag++;
        printf(flag);
    }

    return flag;
}