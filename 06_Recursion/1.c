/* Expressing an entity in terms of itself is called recussion.*/
//program for sum of n natural numbers using recursion.

#include<stdio.h>
int sum(int n);
int main(){
    printf("Enter a number:");
    int n;
    scanf("%d",&n);
    int s=sum(n);
    printf("Sum of first %d natural numbers is: %d\n",n,s);
    return 0;
}
int sum(int n){
    if(n ==1){
        return 1;
    }
   int sumNm1=sum(n-1);
   int sumNm=sumNm1+n;
   return sumNm;
}