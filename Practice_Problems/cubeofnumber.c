#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int cube = n*n*n;
    printf("The cube of number is:%d", cube);
    return 0;
}