//Sum of digits of a number using recursion
#include<stdio.h>
int sumOfDigits(int n);
int main(){
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    int result=sumOfDigits(n);
    printf("Sum of digits of %d is:%d\n",n,result);
    return 0;

}
int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    return (n%10)+sumOfDigits(n/10);
}