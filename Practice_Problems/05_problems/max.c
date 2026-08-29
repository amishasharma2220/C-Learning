#include<stdio.h>
int maxFunc(int i,int j,int k);
int main(){
    int m,a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    m=maxFunc(a,b,c);
    printf("Maximum of %d,%d and %d is: %d\n",a,b,c,m);
    return 0;       

}
int maxFunc(int i,int j,int k){
    int max;
    if(i>j && i>k){
        max=i;
    }
    else if(j>i && j>k){
        max= j;
    }
    else{
        max=k;
    }
}   