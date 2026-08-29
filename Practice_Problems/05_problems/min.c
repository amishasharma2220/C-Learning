#include<stdio.h>
int min(int a ,int b);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a ,&b);
    int m=min(a,b);
    printf("Minimum of %d and %d is : %d\n",a,b,m);
    return 0;
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    else
    return b;
}