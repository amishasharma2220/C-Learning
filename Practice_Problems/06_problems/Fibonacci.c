/*Fibonacci numbers,are commonly denoted F(n) from a sequence ,called the fibonacci sequence such that every number in the sequence after the first two is found by adding the two numbers right before it.*/
#include<stdio.h>
int fibonacci(int n);
int main(){
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    int fib=fibonacci(n);
    printf("Fibonacci of %d is:%d\n",n,fib);
    return 0;

}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;

    }
    int fibNm1=fibonacci(n-1);
    int fibNm2=fibonacci(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
    
}