//Factorial using recursion
#include<stdio.h>
int factorial(int n);
int main(){
    printf("Enter a number:");
    int n;
    scnaf("%d",&n);
    int fact=factorial(n);
    printf("Factorial of %d is :%d\n",n,fact);
    return 0;

}
int factorial(int n){
    if ( n==0 ){
        return 1;
    }
    int factNm1=factorial(n-1);
    int factN=factNm1*n;
    return factN;   

}